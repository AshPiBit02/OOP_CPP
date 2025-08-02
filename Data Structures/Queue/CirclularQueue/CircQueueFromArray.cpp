#include<iostream>
using namespace std;
class CirQueue
{
    int *arr;
    int front,rear,size;
    public:
    CirQueue(int size)
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
        return (rear+1)%size==front;
    }
    void Enqueue(int item)
    {
        if(isFull())
        {
            cout<<"Circlar Queue is Full!"<<endl;
            return;
        }
        if(isEmpty())
        {
            front=rear=0;
            arr[rear]=item;
        }
        else
        {
            rear=(rear+1)%size;
            arr[rear]=item;
        }
        cout<<item<<" Enqueued Successfully"<<endl;
    }
    void Dequeue()
    {
        if(isEmpty())
        {
            cout<<"Circular Queue is Empty!"<<endl;
            return;
        }
        int temp;
        if(front==rear)
        {
            temp=arr[front];
            front=rear=-1;
        }
        else
        {
            temp=arr[front];
            front=(front+1)%size;
        }
        cout<<temp<<" Dequeued from the Circluar Queue"<<endl;
    }
    void Traverse()
    {
        if(isEmpty())
        {
            cout<<"Circluar Queue is Empty!"<<endl;
            return;
        }
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<"---";
        }
        cout<<endl;
    }
};
int main()
{
    CirQueue c(7);
    c.Enqueue(10);
    c.Enqueue(20);
    c.Enqueue(30);
    c.Enqueue(40);
    c.Enqueue(50);
    c.Enqueue(60);
    c.Enqueue(70);
    c.Enqueue(80);
    c.Traverse();
    c.Dequeue();
    c.Dequeue();
    c.Dequeue();
    c.Traverse();
    c.Enqueue(90);
    // c.Traverse();
    return 0;
}