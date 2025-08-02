#include<iostream>
using namespace std;
#define Max_Size 7
int front=-1;
int rear=-1;
int que[Max_Size];
bool isEmpty()
{
    return front==-1;
}
bool isFull()
{
    return rear==Max_Size-1;
}
void enqueue(int item)
{
    if(isFull())
    {
        cout << "Queue is Full!" << endl;
        return;
    }
    if(isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    que[rear] = item;
    cout << item << " Enqueued successfully" << endl;
}
void dequeue()
{
    if(isEmpty())
    {
        cout<<"Queue is Empty!"<<endl;
    }
    else if(front==rear)
    {
        cout<<que[front]<<" Dequeued Successfully"<<endl;
        front = rear = -1;
    }
    else
    {
        cout<<que[front]<<" Dequeued Successfully"<<endl;
        front++;
    }
}
void makeEmpty()
{
    if(isEmpty())
    {
        cout<<"Queue is already Empty!"<<endl;
    }
    else
    {
        front=rear=-1;
        cout<<"Queue is made Empty"<<endl;
    }
}
void traverse()
{
    if(isEmpty())
    {
        cout<<"Queue is Empty!"<<endl;
    }
    else
    {
        for(int i=front; i<=rear; i++)
        {
            cout<<que[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    traverse();
    dequeue();
    traverse();
    makeEmpty();
    traverse();
    enqueue(80);
    traverse();
    return 0;
}

