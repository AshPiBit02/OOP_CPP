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
class CirLL
{
    Node*head;
    Node*tail;
    public:
    CirLL()
    {
        head=tail=nullptr;
    }
    bool isEmpty()
    {
        return head==nullptr;
    }
    void InsertAtHead(int item)
    {
        Node* newNode=new Node(item);
        if(isEmpty())
        {
            head=tail=newNode;
            tail->next=head; // Circular link
        }
        else
        {
            newNode->next=head;
            head=newNode;
            tail->next=head;
        }
        cout<<item<<" Inserted At Head"<<endl;
    }
    void InsertAtTail(int item)
    {
        Node* newNode=new Node(item);
        if(isEmpty())
        {
            head=tail=newNode;
            tail->next=head;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
            tail->next=head;
        }
        cout<<item<<" Inserted At Tail"<<endl;
    }
    void DeleteFromTail()
    {
        if(isEmpty())
        {
            cout<<"Linked List is Empty!"<<endl;
            return;
        }
        Node* temp=head;
        int value=temp->data;
        if(head==tail)
        {
            cout<<value<<" Deleted From Tail"<<endl;
            delete head;
            head=tail=nullptr;
            return;
        }
        while(temp->next!=tail)
        {
            temp=temp->next;
        }
        Node* del=tail;
        delete del;
        cout<<value<<" Deleted From Tail"<<endl;
        tail=temp;
        temp->next=head;
    }
    void DeleteFromHead()
    {
        if(isEmpty())
        {
            cout<<"Linked List is Empty!"<<endl;
            return;
        }
        Node* temp=head;
        int value=temp->data;
        if(head==tail)
        {
            delete temp;
            head=tail=nullptr;
        }
        else
        {
            head=temp->next;
            tail->next=head;
            delete temp;
        }
        cout<<value<<" Deleted From Head"<<endl;
    }
    void Traverse()
    {
        if(isEmpty())
        {
            cout<<"Linked List is Emtpy!"<<endl;
            return;
        }
        Node* temp=head;
        do
        {
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }while(temp!=head);
        cout<<" nullptr"<<endl;
        
    }
    void clear()
    {
        while(!isEmpty())
        {
            DeleteFromHead();
        }
        cout<<"Linked List Cleared......"<<endl;
    }
    ~CirLL()
    {
        clear();
        cout<<"Linked List Destroyed......."<<endl;
    }
};
int main()
{
    CirLL cl;
    cl.InsertAtHead(50);
    cl.InsertAtHead(40);
    cl.InsertAtHead(30);
    cl.InsertAtTail(20);
    cl.Traverse();
    cl.DeleteFromHead();
    cl.Traverse();
    cl.DeleteFromTail();
    cl.Traverse();
}