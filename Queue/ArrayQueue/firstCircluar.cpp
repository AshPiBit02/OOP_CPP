#include<iostream>
using namespace std;
#define Max_Size 7
int front=-1;
int rear=-1;
int que[Max_Size];
void enqueue(int item)
{
    if((front == (rear + 1) % Max_Size))
    {
        cout << "Queue Overflow!" << endl;
        return;
    }
    if(front == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % Max_Size;
    }
    que[rear] = item;
    cout << item << " Enqueued Successfully" << endl;
}
void traverse()
{
    if(front==-1)
    {
        cout<<"Queue is Empty!"<<endl;
        return;
    }else
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<que[i]<<" ";
        }
        cout<<endl;
    }
}
void dequeue()
{
    if(front==-1)
    {
        cout<<"Queue is Empty!"<<endl;
    }
    else if(front==rear)
    {
        cout<<que[front]<<" Dequeued Successfully"<<endl;
        front=rear=-1;
    }
    {
        cout<<que[front]<<" Dequeued Successfully"<<endl;
        front=(front+1)%Max_Size;
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
    enqueue(90);
    traverse();
    dequeue();
    traverse();
    return 0;
}