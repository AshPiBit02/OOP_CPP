//Queue implementation using singly linked list
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
        cout<<item<<" Enqueued successfully"<<endl;
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue Underflow!"<<endl;
            return;
        }
        Node* temp=front;
        cout << temp->data << " Dequeued successfully" << endl; // Added feedback
        front=front->next;
        if(front == NULL) // If queue becomes empty
            rear = NULL;
        delete temp;
    }
    void showFront()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
        }else{
            cout<<front->data<<" is the front element"<<endl;
        }
    }
    void display()
    {
        Node* temp=front;
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
        }else{
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
    q.display();
    q.showFront();
    q.dequeue();
    q.display();
    q.showFront();
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.display();
    while(!q.isEmpty())
    {
        q.dequeue();
    }
    // cout<<endl;
    return 0;
}