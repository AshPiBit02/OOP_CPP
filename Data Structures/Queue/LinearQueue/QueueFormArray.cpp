#include<iostream>
using namespace std;
class Queue
{   
    int * arr;
    int front,rear;
    int size;
    public:
    Queue(int size)
    {
        this->size=size;
        front=rear=-1;
        arr=new int[size];
    }
    bool isEmpty()
    {
        return front==-1;
    }
    bool isFull()
    {
        return rear==size-1;
    }
    void Enqueue(int item)
    {
        if(isFull())
        {
            cout<<"Queue is Full!"<<endl;
            return;
        }
        if(front==-1)
        {
            front=rear=0;
            arr[rear]=item;
        }
        else
        {
            arr[++rear]=item;
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
        if(rear==front)
        {
            cout<<arr[front]<<" Dequeued Successfully"<<endl;
            front=rear=-1;
        }
        else
        {
            cout<<arr[front]<<" Dequeue
            d Successfully"<<endl;
            front++;
        }
    }
    void traverse()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        cout<<"[ ";
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" | ";
        }
        cout<<"]"<<endl;
    }
    ~Queue()
    {
        delete[] arr;
    }
};
int main()
{
    Queue q(5);
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.Enqueue(50);
    q.Dequeue();
    q.traverse();
    q.Dequeue();
    q.Dequeue();
    q.traverse();
    return 0;
}