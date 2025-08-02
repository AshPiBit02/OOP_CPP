//Implementation of stack using array
#include<iostream>
using namespace std;
const int Size=10;
class Stack
{
    private:
    int data[Size];
    int top;
    public:
    Stack()
    {
        top=-1;
    }
    bool isEmpty()
    {
        return(top==-1);
    }
    bool isFull()
    {
        return (top==Size-1);
    }
    void push(int item)
    {
        if(isFull())
        {
            cout<<"Stack Overflow! Cannot push item."<<endl;
        }
        else
        {
            data[++top]=item;
            cout<<item<<" Pushed Successfully."<<endl;
        }
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow! Cannot pop item."<<endl;
        }
        else
        {
            cout<<data[top--]<<" Popped Successfully."<<endl;
        }
    }
};
int main()
{
   
    Stack s;
    s.push(10);
    s.push(50);
    s.push(70);
    s.push(56);
    s.push(29);
    s.pop();
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.pop();
    s.pop();
    return 0;
}