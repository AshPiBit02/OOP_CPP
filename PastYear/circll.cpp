#include<iostream>
using namespace std;
class Node
{
    public:
    Node* next;
    int data;
    Node(int data)
    {
        this->data=data;
        next=nullptr;
    }
};
class Queue
{
    private:
    Node *head,*tail;
    public:
    Queue()
    {
        head=tail=nullptr;
    }
    bool isEmpty()
    {
        return head==nullptr;
    }
    void Enqueue(int item)
    {
        Node* newNode=new Node(item);
        if(isEmpty())
        {
            head=tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
        cout<<item<<" Enqueued"<<endl;
        tail->next=head;
    }
    void Dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        Node* temp=head;
        if(head==tail)
        {
            head=tail=nullptr;
        }
        else
        {
            head=head->next;
            tail->next=head;
        }
        cout<<temp->data<<" Dequeued"<<endl;
        delete temp;
    }
    void Display()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        Node* temp=head;
        do{
            cout<<temp->data<<" - ";
            temp=temp->next;
        }while(temp!=head);
        cout<<"head"<<endl;
    }
};
int main()
{
    Queue q;
    q.Enqueue(10);
    q.Enqueue(55);
    q.Enqueue(21);
    q.Enqueue(56);
    q.Enqueue(86);
    q.Enqueue(99);
    q.Display();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Display();
}