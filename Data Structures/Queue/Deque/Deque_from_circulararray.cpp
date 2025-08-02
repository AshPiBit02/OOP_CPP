#include<iostream>
using namespace std;
template<class T>
class Queue
{
    T *arr;
    int front,rear;
    int size;
    public:
    Queue(int size)
    {
        this->size=size;
        arr=new T[size];
        front=rear=-1;
    }
    bool isFull()
    {
        return rear==size-1;
    }
    bool isEmpty()
    {
        return front==-1;
    }
    void Enqueue_rear(T item)
    {
        if(isFull())
        {
            cout<<"Queue is Full!"<<endl;
            return;
        }
        if(isEmpty())
        {
            front=rear=0;
        }
        else
        {
            rear=(rear+1)%size;
        }
        arr[rear]=item;
        cout<<item<<" Enqueued from Rear"<<endl;
    }
    void Enqueue_front(T item)
    {
        if(isFull())
        {
            cout<<"Queue is Full!"<<endl;
            return;
        }
        if(isEmpty())
        {
            front=rear=0;
        }
        else
        {
            front=(front-1+size)%size;
        }
        arr[front]=item;
        cout<<item<<" Enqueued from Front"<<endl;
    }
    void Dequeue_rear()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        cout<<arr[rear]<<" Dequeued from Rear"<<endl;
        if(front==rear)
        {
            rear=(rear-1)%size;
        }
        else
        {
            rear--;
        }
    }
    void Dequeue_front()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        cout<<arr[front]<<" Dequeued from Front"<<endl;
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front++;
        }
    }
    void Traverse()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        T temp=front;
        do
        {
            cout<<arr[temp]<<" ";
            temp=(temp+1)%size;
        }while(temp<=rear);
        cout<<endl;
    }
};
int main()
{
    Queue<int>q(5);
    // q.Enqueue_front(5);
    // q.Enqueue_front(15);
    q.Enqueue_rear(10);
    q.Enqueue_rear(20);
    q.Enqueue_rear(30);
    q.Dequeue_front();
    q.Dequeue_front();
    q.Dequeue_front();
    q.Traverse();
    // q.Dequeue_rear();
    // q.Traverse();
    // q.Dequeue_front();
    // q.Traverse();
    return 0;
}