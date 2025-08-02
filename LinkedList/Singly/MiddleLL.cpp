#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
class list
{
    public:
    Node* head;
    list()
    {
        head=NULL;
    }
    void push_front(int item)
    {
        Node* newNode=new Node(item);
        if(head==NULL)
        {
            head=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
        cout<<item<<" pushed successfully"<<endl;
    }
    void display()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    int middle()
    {
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
        
    }
};
int main()
{
    list l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.push_front(40);
    l.push_front(50);   
    l.push_front(60);   
    l.push_front(70);   
    l.display();
    cout<<"Middle element is "<<l.middle()<<endl;
    return 0;
}