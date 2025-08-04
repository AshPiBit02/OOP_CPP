#include<iostream>
using namespace std;
const int asize=7;
class Stack
{
    private:
    int *arr;
    int top;
    public:
    Stack()
    {
        arr=new int[asize];
        top=-1;
        cout<<"Stack Constructed of size "<<asize<<"......"<<endl;
    }
    bool isEmpty()
    {
        return top==-1;
    }
    bool isFull()
    {
        return top==asize-1;
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
        cout<<arr[top--]<<" Poped from Stack"<<endl;
    }
    void peek()
    {
        if(isEmpty())
        {
            cout<<" Stack is Empty!"<<endl;
            return;
        }
        cout<<arr[top]<<" is the Top Element"<<endl;
    }
    ~Stack()
    {
        while(!isEmpty())
        {
            pop();
        }
        delete []arr;
        cout<<"Stack Destructed......"<<endl;
    } 
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    s.push(50);
    s.peek();
    s.push(60);
    return 0;
}