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
class Stack
{
    Node * head;
    public:
    Stack()
    {
        head=nullptr;
        cout<<"Stack Created....."<<endl;
    }
    bool isEmpty()
    {
        return head==nullptr;
    }
    void push(int item)
    {
        Node* newNode=new Node(item);
        newNode->next=head;
        head=newNode;
        cout<<item<<" Pushed to Stack "<<endl;
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        cout<<temp->data<<" Popped from Stack"<<endl;
        delete temp;
    }
    void peek()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        cout<<head->data<<" Last Element"<<endl;
    }
    ~Stack()
    {
        while(!isEmpty())
        {
            pop();
        }
        cout<<"Stack Destroyed..."<<endl;
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.pop();
    s.pop();
    s.pop();
    s.peek();
    return 0;
}