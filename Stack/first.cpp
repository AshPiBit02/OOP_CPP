#include<iostream>
using namespace std;
#define MAX_SIZE 5
int stack[MAX_SIZE];
int top = -1;
void push(int item)
{
    if(top==MAX_SIZE-1)
    {
        cout<<"Stack is Full!"<<endl;
        return;
    }
    else
    {
        top++;
        stack[top]=item;
        cout<<item<<" Pushed Successfully"<<endl;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"The stack is Empty!"<<endl;
    }
    else
    {
        cout<<stack[top]<<" Popped Successfully"<<endl;
        top--;
    }
}
void peek()
{
    if(top==-1)
    {
        cout<<"The stack is Empty!"<<endl;
    }
    else
    {
        cout<<stack[top]<<" Peeked"<<endl;
    }
}
void isFull()
{
    if(top==MAX_SIZE-1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}
void isEmpty()
{
    if(top==-1)
    {
        cout<<"True"<<endl;
    }
    else 
    {
        cout<<"False"<<endl;
    }
}
void displayStack()
{
    if(top==-1)
    {
        cout<<"Stack is Empty!"<<endl;
    }
    else{

        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<endl;
        }
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    peek();
    isFull();
    pop();
    pop();
    peek();
    isEmpty();
    displayStack();
    return 0;
}