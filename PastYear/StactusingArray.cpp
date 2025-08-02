#include<iostream>
using namespace std;
class Stack
{
    int *arr,top,size;
    public:
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    bool isEmpty()
    {
        // cout<<"Stack is Empty!"<<endl;
        return top==-1;
    }
    bool isFull()
    {
        // cout<<"Stack is Full!"<<endl;
        return top==size-1;
    }
    void push(int item)
    {
        if(isFull())
        {
            cout<<"Stack Overflow!"<<endl;
            return;
        }
        arr[++top]=item;
        cout<<item<<" Pushed to Stack"<<endl;
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow!"<<endl;
            return;
        }
        cout<<arr[top--]<<" Popped from Top"<<endl;
    }
    void peek()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow!"<<endl;
            return;
        }
        cout<<arr[top]<<" is the Top element"<<endl;
    }
    ~Stack()
    {
        delete[] arr;
    }
};
int main()
{
    Stack s(5);
    s.peek();
    s.push(30);
    s.push(10);
    s.push(30);
    s.peek();
    s.push(20);
    s.push(30);
    s.peek();
    return 0;
}