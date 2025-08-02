#include<iostream>
using namespace std;
class CirQueue
{
    int *arr,front,rear,size;
    public:
    CirQueue(int size)
    {
        this->size=size;
        front=rear=-1;
        arr=new int[size];
    }
    bool isFull()
    {
        return (rear+1)%size==front;
    }
    bool isEmpty()
    {
        return rear==-1;
    }
    void Enqueue(int item)
    {
        if(isFull())
        {
            cout<<"Circular Queue is Empty!"<<endl;
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
            cout<<"Circluar Queue is Empty!"<<endl;
            return;
        }
        int temp;
        if(rear==front)
        {
            temp=arr[rear];
            front=rear=-1;
        }
        else
        {
            temp=arr[rear];
            front=(front+1)%size;
        }
        cout<<temp<<" Dequeued Successfully"<<endl;
    }
    void Status()
    {
        if(isFull())
        {
            cout<<"Circular Queue is Full"<<endl;
        }
        else if(isEmpty())
        {
            cout<<"Circluar Queue is Empty"<<endl;
        }
        else
        {
            cout<<"Circluar Queue is Partially Filled"<<endl;
        }
    }

};
int main()
{
    CirQueue q(5);
    q.Status();
    q.Enqueue(10);
    q.Enqueue(15);
    q.Enqueue(20);
    q.Enqueue(25);
    q.Enqueue(30);
    q.Status();
    q.Dequeue();
    q.Status();
    return 0;
}