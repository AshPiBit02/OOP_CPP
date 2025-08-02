#include<iostream>
using namespace std;
class Node
{
    public:
    Node *next;
    int data;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
class LinkedList
{
    Node *head,*tail;
    public:
    LinkedList()
    {
        head=tail=NULL;
    }
    bool isEmpty()
    {
        return head==NULL;
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
            tail=newNode;
        }
        cout<<item<<" Inserted At Tail"<<endl;
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
            head=newNode;
        }
        cout<<item<<" Inserted At Head"<<endl;
    }
    void DeleteFromHead()
    {
        if(isEmpty())
        {
            cout<<"Linked List is Empty!"<<endl;
            return;
        }
        Node*temp=head;
        if(head==tail)
        {
            delete head;
            head=tail=NULL;
        }
        else
        {
            head=head->next;
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
        if(head==tail)
        {
            cout<<head->data<<" Deleted From Tail"<<endl;
            delete head;
            head=tail=NULL;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=tail)
            {
                temp=temp->next;
            }
            cout<<temp->next->data<<" Deleted From Tail"<<endl;
            Node* del=tail;
            delete del;                     
            tail=temp;
            tail->next=NULL;
        }
    }
    void Traverse()
    {
        if(isEmpty())
        {
            cout<<"Linked List is Empty!"<<endl;
            return;
        }
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void Srch(int key)
    {
        if(isEmpty())
        {
            cout<<"Linked List is Empty!"<<endl;
            return;
        }
        bool found=false;
        int count=0;
        Node*temp=head;
        do{
            count++;
            if(temp->data==key)
            {
                found=true;
                break;
            }
            temp=temp->next;
        }while(temp!=NULL);
        if(found)
        {
            cout<<key<<" Found at position "<<count<<endl;
        }
        else
        {
            cout<<key<<" Doesn't exist in the Linked List"<<endl;
        }
    }
    ~LinkedList()
    {
        while(!isEmpty())
        {
            DeleteFromHead();
        }
    }
};
int main()
{
    LinkedList ll;
    ll.InsertAtHead(10);
    ll.InsertAtHead(20);
    ll.InsertAtHead(30);
    ll.InsertAtHead(40);
    ll.InsertAtHead(50);
    ll.InsertAtTail(60);
    ll.Traverse();
    // ll.DeleteFromHead();
    ll.DeleteFromHead();
    ll.DeleteFromTail();
    ll.Traverse();
    // ll.DeleteFromTail();
    ll.Traverse();
    ll.Srch(10);
    ll.Srch(30);
    return 0;
}