#include<iostream>
using namespace std;
class Node
{
    public:
    Node* next;
    int data;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
class Stack
{
    int size;
    Node *top;
    public:
    Stack()
    {
        size=0;
        top=NULL;
    }
    void push(int item)
    {
        Node* temp=new Node(item);
        if(temp==NULL)
        {
            cout<<"Stack Overflow!"<<endl;
            return;
        }
        temp->next=top;
        top=temp;
        cout<<item<<" Pushed Successfully"<<endl;
        size++;
    }
    void pop()
    {
        if(top==NULL)
        {
            cout<<"Stack Underflow!"<<endl;
            return;
        }
        Node* temp=top;
        top=top->next;
        cout<<temp->data<<" Popped Successfully"<<endl;
        delete temp;
    }
    void peek()
    {
        if(top==NULL)
        {
            cout<<"Stack Underflow!"<<endl;
            return;
        }
        cout<<top->data<<" is the Top element"<<endl;
    }
};
int main()
{
    Stack s;
    s.push(13);
    s.push(36);
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    return 0;
}