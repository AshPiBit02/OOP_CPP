#include<iostream>
using namespace std;
class Node
{
    public:
    Node* next,* prev;
    int data;
    Node(int data)
    {
        this->data=data;
        next=prev=nullptr;
    }
};
class LL
{
    private:
    Node *head,*tail;
    public:
    LL()
    {
        head=tail=nullptr;
    }
    bool isEmpty()
    {
        return head==nullptr;
    }
    void Insert(int item)
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
            tail->next=nullptr;
        }
        cout<<item<<" Inserted at Tail"<<endl;
    }
    void InsertAtPos(int item, int pos)
    {
        if(isEmpty())
        {
            Insert(item);
            cout<<"At position "<<pos<<endl;
            return;
        }
        Node *temp=head;
        int count=1;
        while(count<pos && temp!=nullptr)
        {
            temp=temp->next;
            if(temp)
            count++;
        }

    }
};