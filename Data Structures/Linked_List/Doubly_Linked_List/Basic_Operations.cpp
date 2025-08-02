#include<iostream>
using namespace std;
class Node
{
    public:
    Node *next;
    Node*prev;
    int data;
    Node(int data)
    {
        this->data=data;
        next=prev=nullptr;
    }
};
class Doubly
{
    private:
    Node* head;
    Node*tail;
    public:
    Doubly()
    {
        cout<<"Linked List Constructed........"<<endl;
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
        }
        else
        {
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
        cout<<item<<" Inserted At Head"<<endl;
    }
    void InsertAtTail(int item)
    {
        Node* newNode=new Node(item);
        if(isEmpty())
        {
            head=tail=newNode;
        }
        else
        {
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }
        cout<<item<<" Inserted At Tail"<<endl;
    }
    void DeleteFromHead()
    {
        if(isEmpty())
        {
            cout<<"Linked List is Empty!"<<endl;
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
            head->prev=nullptr;
        }
        cout<<temp->data<<" Deleted From Head"<<endl;
        delete temp;
    }
    void DeleteFromTail()
    {
        if(isEmpty())
        {
            cout<<"Linked List is Empty!"<<endl;
            return;
        }
        Node* temp=tail;
        if(head==tail)
        {
            head=tail=nullptr;
        }
        else
        {
            tail=tail->prev;
            tail->next=nullptr;
        }
        cout<<temp->data<<" Deleted From Tail"<<endl;
        delete temp;
    }
    void Traverse()
    {
        if(isEmpty())
        {
            cout<<"Linked List is Empty!"<<endl;
            return;
        }
        Node* temp=head;
        cout<<"nullptr<-";
        while(temp!=nullptr)
        {
            cout<<temp->data<<"<->";
            temp=temp->next;
        }
        cout<<"nullptr"<<endl;
    }
    void revTraverse()
    {
        if(isEmpty())
        {
            cout<<"Linked List is Empty!"<<endl;
            return;
        }
        Node* temp=tail;
        cout<<"nullptr<-";
        while(temp!=nullptr)
        {
            cout<<temp->data<<"<->";
            temp=temp->prev;
        }
        cout<<"nullptr"<<endl;
    }
    void clear()
    {
        while(!isEmpty())
        {
            DeleteFromHead();
        }
        cout<<"Linked List Cleared"<<endl;
    }
    ~Doubly()
    {
        clear();
        cout<<"Link List Destructed........."<<endl;
    }
};
int main()
{
    Doubly d;
    d.InsertAtHead(10);
    d.InsertAtHead(20);
    d.clear();
    d.InsertAtHead(30);
    d.InsertAtHead(40);
    d.InsertAtHead(50);
    d.Traverse();
    d.revTraverse();
    d.InsertAtTail(60);
    d.Traverse();
    d.DeleteFromHead();
    d.Traverse();
    d.DeleteFromTail();
    d.Traverse();
    return 0;
}