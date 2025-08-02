#include<iostream>
using namespace std;
class Node
{
    public:
    Node* next;
    Node* prev;
    int data;
    Node(int data)
    {
        cout<<"Node Created..........."<<endl;
        this->data=data;
        next=prev=nullptr;
    }
};
class Cirll
{
    private:
    Node* head;
    Node* tail;
    public:
    Cirll()
    {
        cout<<"Circluar Doubly Linked List Constructed.........."<<endl;
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
            tail->next=head;
            head->prev=tail;
        }
        else
        {
            newNode->next=head;
            head->prev=newNode;
            newNode->prev=tail;
            tail->next=newNode;
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
            head->prev=tail;
            tail->next=head;
        }
        else
        {
            tail->next=newNode;
            newNode->prev=tail;
            newNode->next=head;
            head->prev=newNode;
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
            head->prev=tail;
            tail->next=head;
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
        Node *temp=tail;
        if(head==tail)
        {
            head=tail=nullptr;
        }
        else
        {
            tail=tail->prev;
            tail->next=head;
            head->prev=tail;
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
        cout<<" <- ";
        do{
            cout<<temp->data<<" <=> ";
            temp=temp->next;
        }while(temp!=head);
        cout<<" -> "<<endl;
    }
    void RevTraverse()
    {
        if(isEmpty())
        {
            cout<<"Linked List is Empty!"<<endl;
            return;
        }
        Node* temp=tail;
        cout<<" <- ";
        do{
            cout<<temp->data<<" <=> ";
            temp=temp->prev;
        }while(temp!=tail);
        cout<<" -> "<<endl;
    }
    void Navigate()
    {
        if(isEmpty())
        {
            cout<<"Navigation Not Possible!"<<endl;
            return;
        }
        Node*temp=head;
        int op;
        cout<<"-------Navigation Feature----------"<<endl;
        cout<<"1.Move to Next\n2.Move to Previous\n0.Exit\n";
        cout<<"Current Node: "<<temp->data<<endl;
        do{
        cout<<"Navigate to: ";
        cin>>op;
        switch (op)
        {
        case 1:
        temp=temp->next;
        cout<<temp->data<<endl;
            break;
        case 2:
        temp=temp->prev;
        cout<<temp->data<<endl;;
        break;
        case 0:
        cout<<"Exiting Navigation..."<<endl;
        break;
        default:
        cout<<"Invalid Operation!"<<endl;
            break;
        }
        }while(op!=0);
    }
    void Clear()
    {
        while(!isEmpty())
        {
            DeleteFromHead();
        }
        cout<<"Linked List Cleared"<<endl;
    }
    ~Cirll()
    {
        Clear();
        cout<<"Circluar Doubly Linked List Destructed........"<<endl;
    }
};
int main()
{
    Cirll cl;
    cl.InsertAtHead(20);
    cl.InsertAtHead(10);
    cl.InsertAtTail(30);
    cl.InsertAtTail(40);
    cl.Navigate();
    cl.Traverse();
    cl.DeleteFromHead();
    cl.Traverse();
    cl.DeleteFromTail();
    cl.Traverse();
    cl.RevTraverse();
    return 0;
}