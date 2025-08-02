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
        next=NULL;
        prev=NULL;
    }
};
class Deque
{
    Node *front,*back;
    public:
    Deque()
    {
        front=back=NULL;
    }
    bool isEmpty()
    {
        return front==NULL;
    }
    void push_back(int item)
    {
        Node* newNode=new Node(item);
        if(isEmpty())
        {
            front=back=newNode;
        }
        else
        {
            back->next=newNode;
            newNode->prev=back;
            back=newNode;
        }
        cout<<item<<" Pushed To Back"<<endl;
    }
    void push_front(int item)
    {
        Node* newNode=new Node(item);
        if(isEmpty())
        {
            front=back=newNode;
        }
        else
        {
            newNode->next=front;
            front->prev=newNode;
            front=newNode;
        }
        cout<<item<<" Pushed To Front"<<endl;   
    }
    void pop_front()
    {
        Node* temp=front;
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
        }
        else if(front==back)
        {
            cout<<temp->data<<" Popped From Queue";
            front=back=NULL;
        }
        else
        {
            front=front->next;
            cout<<temp->data<<" Popped From Front"<<endl;
        }
        delete temp;
    }
    void pop_back()
    {
        Node* temp=back;
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
        }
        else if(front==back)
        {
            cout<<temp->data<<" Popped From Queue"<<endl;
            front=back=NULL;
        }
        else
        {
            back=back->prev;
            cout<<temp->data<<" Popped From Back"<<endl;
        }
        delete temp;
    }
};
int main()
{
    Deque q;
    q.push_back(10);
    q.push_back(15);
    q.push_back(20);
    q.push_front(5);
    q.push_front(0);
    q.pop_front();
    q.pop_back();
    q.pop_back();
    q.pop_back();
    q.pop_back();
    q.pop_back();
    q.pop_back();
    return 0;
}