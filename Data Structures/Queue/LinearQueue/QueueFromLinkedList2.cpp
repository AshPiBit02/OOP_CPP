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
    Node *front,*rear;
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
        Node* newNode=new Node(item);
        if(isEmpty())
        {
            front=rear=newNode;
        }
        else
        {
            rear->next=newNode;
            rear=rear->next;
        }
        cout<<item<<" Enqueued Successfully"<<endl;
    }

    void Dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
        }
        else
        {
            Node* temp=front;
            front=front->next;
            cout<<temp->data<<" Dequeued Successfully"<<endl;
            delete temp;
        }
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
            cout<<"  | "<<temp->data;
            temp=temp->next;
        }
        cout<<" |"<<endl;
    }
    void TraversePop()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        Node* temp=front;
        Node* del;
        while(temp!=NULL)
        {
            del=temp;
            temp=temp->next;
            cout<<del->data<<" Popped"<<endl;
            delete del;
            if(temp==NULL)
            {
                front=rear=NULL;
            }
        }

    }
};
int main()
{
    Queue q;
    q.Traverse();
    q.Dequeue();
    q.Enqueue(99);
    q.Enqueue(98);
    q.Enqueue(97);
    q.Enqueue(96);
    q.Enqueue(95);
    q.Enqueue(94);
    q.Traverse();
    q.Dequeue();
    q.Traverse();
    q.TraversePop();
    q.Enqueue(10);
    q.Traverse();
    return 0;
}