#include<iostream>
using namespace std;
class Stack
{
    int* arr;
    int size;
    int top;
    public:
    Stack(int size)
    {
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    void push(int item)
    {
        if(size-1==top)
        {
            cout<<"The Stack is Full!"<<endl;
            return;
        }
        arr[++top]=item;
        cout<<item<<" Pushed Successfully"<<endl;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"The Stack is Empty!"<<endl;
            return;
        }
        cout<<arr[top]<<" Popped Successfully"<<endl;
        top--;
    }
    void peek()
    {
        if(top==-1)
        {
            cout<<"The Stack is Empty!"<<endl;
            return;
        }
        cout<<arr[top]<<" is the top element"<<endl;
    }
};
int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    return 0;
}