//Implementation of linear queue using array
#include<iostream>
using namespace std;
const int Max_Size=7;
class Queue
{
    private:
    int arr[Max_Size];
    int rear,front;
    public:
    Queue()
    {
        rear=front=-1;
    }
    bool isEmpty()
    {
        return rear==-1 && front==-1;
    }
    bool isFull()
    {
        return rear==Max_Size-1;
    }
    void enqueue(int item)
    {
        if(isFull())
        {
            cout<<"Queue is full, unable to enqueue "<<item<<endl;
            return;
        }
        if(isEmpty())
        {
           rear= front=0;
        }
        arr[++rear]=item;
        cout<<item<<" Enqueued to the queue"<<endl;
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty, unable to dequeue. "<<endl;
            return;
        }
        int item=arr[front++];
        cout<<item<<" Dequeued from the queue"<<endl;
        if(front>rear)
        {
            front=rear=-1;
        }
    }
    void peek()
    {
        if(isEmpty())
        {
            cout<<"Unable to Peek as the Queue is Empty"<<endl;
        }
        else
        {
            cout<<arr[front]<<" (front element)"<<endl;
        }
    }
    void size()
    {
        if(isEmpty())
        {
            cout<<"NULL"<<endl;
        }
        else
        {
            cout<<rear-front+1<<"(Size of the Queue)"<<endl;
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(19);
    q.enqueue(59);
    q.enqueue(39);
    q.enqueue(59);
    q.enqueue(15);
    q.enqueue(10);
    q.enqueue(23);
    q.enqueue(11);
    q.dequeue();

}