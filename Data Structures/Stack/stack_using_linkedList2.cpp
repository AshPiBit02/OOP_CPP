#include<iostream>
using namespace std;
class Node
{
    public:
    Node *next;
    int data;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
class Stack
{
    public:
    Node * top;
    int size;
    Stack()
    {
        top=NULL;
        size=0;
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
        size--;
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
    Stack S;
    S.peek();
    S.push(23);
    S.push(32);
    S.peek();
    S.push(33);
    S.pop();
    S.peek();
    return 0;

}