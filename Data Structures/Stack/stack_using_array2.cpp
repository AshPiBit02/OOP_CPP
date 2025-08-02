#include<iostream>
using namespace std;
class Stack
{
    int *arr,size,top;
    public:
    Stack(int size)
    {
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    bool IsFull()
    {
        return top==size-1;
    }
    bool IsEmpty()
    {
        return top==-1;
    }
    void push(int item)
    {
        if(IsFull())
        {
            cout<<"Stack Overflow!"<<endl;
            return;
        }
        arr[++top]=item;
        cout<<item<<" Pushed Successfully"<<endl;
    }
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"Stack Underflow!"<<endl;
            return;
        }
        cout<<arr[top]<<" Popped Successfully"<<endl;
        top--;
    }
    void peek()
    {
        if(IsEmpty())
        {
            cout<<"Stack Underflow!"<<endl;
            return;
        }
        cout<<arr[top]<<" Peeked Successfully"<<endl;
    }
    void CheckStatus()
    {
        if(top==size-1)
        cout<<"Stack is Full"<<endl;
        else if(top==-1)
        cout<<"Stack is Empty"<<endl;
        else
        cout<<"Stack is Partially Full"<<endl;
    }
};
int main()
{
    Stack s(5);
    s.CheckStatus();
    s.IsEmpty();
    s.IsFull();
    s.push(55);
    s.push(60);
    s.CheckStatus();
    s.push(70);
    s.push(17);
    s.push(98);
    s.push(80);

}
