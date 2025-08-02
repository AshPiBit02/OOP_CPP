#include<iostream>
using namespace std;
class Queue
{
    private:
    int* arry;
    int size,front,rear;
    public:
    Queue(int size)
    {
        this->size=size;
        front=rear=-1;
        arry= new int[size];
    }
    bool isFull()
    {
        return rear==size-1;
    }
    bool isEmpty()
    {
        return front==-1;
    }
    void Enqueue(int item)
    {
        if(isFull())
        {
            cout<<"Queue is Full!"<<endl;
            return;
        }
        if(isEmpty())
        {
            front=rear=0;
            arry[rear]=item;
        }
        else
        {
            arry[++rear]=item;
        }
        cout<<item<<" Enqueued Successfully"<<endl;
    }
    void Dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        int temp;
        if(rear==front
        )
        {
            temp=arry[front];
            front=rear=-1;
        }
        else
        {
            temp=arry[front];
            front++;
        }
        cout<<temp<<" Dequeued Successfully"<<endl;
    }
    void Traverse()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        cout<<"[ ";
        for(int i=front;i<=rear;i++)
        {
            cout<<arry[i]<<" | ";
        }
        cout<<"]"<<endl;
    }
    ~Queue()
    {
        delete[] arry;
    }
};
int main()
{
    Queue q(6);
    q.Enqueue(11);
    q.Enqueue(22);
    q.Enqueue(33);
    q.Enqueue(44);
    q.Enqueue(55);
    q.Enqueue(66);
    q.Enqueue(77);
    q.Dequeue();
    q.Traverse();
    return 0;
}