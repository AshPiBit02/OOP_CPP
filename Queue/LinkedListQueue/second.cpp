#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
class Queue
{
    public:
    Node* front;
    Node* rear;
    Queue()
    {
        front=rear=NULL;
    }
    void enqueue(int item)
    {
        Node* newNode=new Node(item);
        if(isEmpty())
        {
            front=rear=newNode;
        }else{
            rear->next=newNode;
            rear=newNode;
        }
        cout<<item<<" Enqueued Successfully"<<endl;
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue Underflow!"<<endl;
            return;

        }else{
            Node* temp=front;
            front=front->next;
            if(front==NULL)
            {
                rear==NULL;
            }
            cout<<"Previous front element i.e "<<temp->data<<" dequeued successfully"<<endl;
            delete temp;
        }
    }
    void frontpeek()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
        }else{
            cout<<front->data<<" is the front element."<<endl;
        }
    }
    void rearpeek()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
        }else{
            cout<<rear->data<<" is the rear element."<<endl;
        }
    }
    void display()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
        }else{
            Node* temp=front;
            cout<<"Queue elements are: ";
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
    bool isEmpty()
    {
        return front==NULL;
    }
};
int main()
{
    Queue q;
    q.dequeue();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.display();
    q.frontpeek();
    q.rearpeek();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    q.enqueue(100);
    q.display();
    return 0;
}