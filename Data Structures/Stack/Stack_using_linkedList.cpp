#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
class Stack
{
    Node* top;
    int size;
    public:
    Stack()
    {
        top=NULL;
        size=0;
    }
    void push(int item)//In linked list there is no any chance of data overflow untill the heap memory becomes full
    {
        Node * temp=new Node(item);
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
        Node * temp=top;
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
        cout<<top->data<<" is the top element"<<endl;
    }
};
int main()
{
    Stack s;
    s.push(22);
    s.push(33);
    s.push(44);
    s.push(55);
    s.push(66);
    s.push(77);
    // s.peek();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.peek();
    return 0;
}