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
class LL
{
    private:
    Node *head,*tail;
    public:
    LL ()
    {
        head=tail=nullptr;
    }
    bool isEmpty()
    {
        return head==nullptr;
    }
    void InsertAtEnd(int item)
    {
        Node* newNode=new Node(item);
        if(isEmpty())
        {
            head=tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
        cout<<item<<" Inserted At End"<<endl;
    }
    void Display()
    {
        if(isEmpty())
        {
            cout<<"LInked list is emtpy!"<<endl;
            return;
        }
        Node* temp=head;
        while(temp!=nullptr)
        {
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"nullptr"<<endl;
    }
};
int main()
{
    LL l;
    l.InsertAtEnd(10);
    l.InsertAtEnd(20);
    l.InsertAtEnd(30);
    l.InsertAtEnd(40);
    l.InsertAtEnd(50);
    l.Display();
}