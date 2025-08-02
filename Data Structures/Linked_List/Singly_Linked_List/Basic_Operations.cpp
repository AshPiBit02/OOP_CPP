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
    private:
    Node *head,*tail;
    public:
    LinkedList()
    {
        head=tail=NULL;
    }
    bool isEmpty()
    {
        return tail==NULL;
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
            head=tail=NULL;
        }
        else
        {
        head=head->next;
        }
        cout<<temp->data<<" Deleted from Head"<<endl;
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
            cout<<head->data<<" Deleted from Tail"<<endl;
            head=tail=NULL;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=tail)
            {
                temp=temp->next;
            }
            Node* ToDel= tail;
            tail=temp;
            cout<<ToDel->data<<" Deleted from Tail"<<endl;
            delete ToDel;
        }
        
    }
    void SrchItem(int item)
    {
        bool found=false;
        if(isEmpty())
        {
            cout<<"Linked List is Empty!"<<endl;
            return;
        }
        Node* temp=head;
        int count=0;
        do{
            count++;
            if(temp->data==item)
            {
                found=true;
                break;
            }
            temp=temp->next;
        }while(temp!=NULL);
        if(found)
        {
            cout<<item<<" Found at position "<<count<<endl;
        }
        else
        {
            cout<<item<<" Doesn't exist!"<<endl;
        }
    }

    void Traverse()
    {
        if(isEmpty())
        {
            cout<<"Linked List is Empty!"<<endl;
            return;
        }
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"--->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main()
{
    LinkedList ll;
    ll.DeleteFromHead();
    ll.DeleteFromTail();
    ll.InsertAtTail(30);
    ll.Traverse();
    ll.InsertAtTail(40);
    ll.InsertAtTail(50);
    ll.Traverse();
    ll.InsertAtHead(20);
    ll.InsertAtHead(10);
    ll.Traverse();
    ll.SrchItem(10);
    ll.DeleteFromHead();
    ll.Traverse();
    ll.DeleteFromTail();
    ll.DeleteFromTail();
    ll.Traverse();
    ll.SrchItem(10);
    ll.InsertAtHead(10);
    ll.InsertAtTail(40);
    ll.InsertAtTail(50);
    ll.InsertAtTail(60);
    ll.InsertAtTail(100);
    ll.InsertAtTail(150);
    ll.SrchItem(50);
    ll.Traverse();
    ll.SrchItem(10);
    return 0;
}