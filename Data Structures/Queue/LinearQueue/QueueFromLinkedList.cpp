#include<iostream>
using namespace std;
class Node
{
    public:
    Node *next;
    int data;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
class Queue
{
    Node* front;
    Node* rear;
    public:
    Queue()
    {
        front=rear=NULL;
    }
    bool isEmpty()
    {
        return front==NULL;
    }
    void Enqueue(int item)
    {
        Node* newnode=new Node(item);
        if(isEmpty())
        {
            front=rear=newnode;
        }
        else{
        rear->next=newnode;
        rear=rear->next;//rear=newnode;
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
        Node* temp=front;
        front=front->next;
        cout<<temp->data<<" Dequeued From the Queue"<<endl;
        delete temp;
    }

    void Traverse()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        Node* temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<" | ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    Queue q;
    q.Dequeue();
    q.Enqueue(5);
    q.Enqueue(4);
    q.Enqueue(3);
    q.Traverse();
    q.Enqueue(2);
    q.Enqueue(1);
    q.Traverse();
    return 0;
}