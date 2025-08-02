//Stack Implementation using singly linked list
#include<iostream>
using namespace std;
class Stack{
    private:
    struct Node{
        int data;
        Node* next;
    };
    Node* top;
    public:
    Stack():top(NULL){}
    //Fuction to push an element onto the stack
    void push(int value)
    {
        Node* newNode= new Node();
        if(!newNode)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        newNode->data=value;
        newNode->next=top;
        top=newNode;
        cout<<value<<" pushed to stack"<<endl;
    }
    //Function to check if the stack is empty
    bool isEmpty()
    {
        return top==NULL;
    }
    //Function to pop an element from the stack 
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack underflow"<<endl;
            return -1; // Sentinel value for underflow
        }
        Node* temp=top;
        int popped=temp->data;
        top=top->next;
        delete temp;
        return popped;
    }
    //Function to display the stack elements
    void display()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        Node* temp=top;
        cout<<"Stack elements are: ";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    ~Stack()
    {
        while(!isEmpty())
        {
            pop();
        }
    }
};
int main()
{
    Stack stack;
    stack.pop();
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    cout<<"Popped element: "<<stack.pop()<<endl;
    cout<<"Popped element: "<<stack.pop()<<endl;
    stack.display();
    return 0;
}