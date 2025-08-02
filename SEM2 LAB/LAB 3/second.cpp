#include<iostream>
using namespace std;
#define Max_Size 5
class CircularQueue
{
    private:
    int arr[Max_Size];
    int front,rear;
    public:
    CircularQueue()
    {
        front=rear=-1;
    }
    bool isFull()
    {
        return rear==Max_Size-1;
    }
    bool isEmpty()
    {
        return front==-1;
    }
    void Enqueue(int item)
    {
        if(isFull())
        {
            cout<<"Queue is full, unable to enqueue "<<item<<endl;
            return;
        }
        if(isEmpty())
        {
            front=rear=0;
        }else
        {
            rear=(rear+1)%Max_Size;
        }
        arr[rear]=item;
        cout<<item<<" Enqueued to the queue"<<endl;
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty, unable to dequeue"<<endl;
            return;
        }
        int item=arr[front];
        cout<<item<<" Dequeued from the queue"<<endl;
        if(front==rear)
        {
            front=rear=-1;
        }else
        {
            front=(front+1)%Max_Size;
        }
    }
};
int main()
{
    CircularQueue q;
    q.dequeue();
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.Enqueue(50);
    q.Enqueue(60);
    q.Enqueue(70);
    q.dequeue();
    return 0;
}
