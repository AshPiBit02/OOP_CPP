#include<iostream>
#include<string>
using namespace std;
template<class T>
class Node
{
    public:
    Node<T> *next,*prev;
    T data;
    Node(T data)
    {
        this->data=data;
        next=prev=NULL;
    }
};
template<class T>
class Deque
{
    private:
    int count;
    Node<T> *front,*rear;
    public:
    Deque()
    {
        front=rear=NULL;
        count=0;
    }
    bool isEmpty()
    {
        return front==NULL;
    }
    void Empty()
    {
        cout<<"Queue is Empty"<<endl;
    }
    void push_rear(T item)
    {
        Node<T>* newNode=new Node<T>(item);
        if(isEmpty())
        {
            front=rear=newNode;
        }
        else
        {
            rear->next=newNode;
            newNode->prev=rear;
            rear=newNode;
        }
        cout<<item<<" Pushed to Back"<<endl;
        count++;
    }
    void push_front(T item)
    {
        Node<T>* newNode=new Node<T>(item);
        if(isEmpty())
        {
            front=rear=newNode;
        }
        else
        {
            front->prev=newNode;
            newNode->next=front;
            front=newNode;
        }
        cout<<item<<" Pushed to Front"<<endl;
        count++;
    }
    void pop_rear()
    {
        if(isEmpty())
        {
            Empty();
            return;
        }
        Node<T>* temp=rear;
        if(front==rear)
        {
            rear=front=NULL;
        }
        else
        {
            rear=rear->prev;
            rear->next=NULL;
        }
        cout<<temp->data<<" Popped from Rear"<<endl;
        delete temp; 
        count--;
    }
    void pop_front()
    {
        if(isEmpty())
        {
            Empty();
            return;
        }
        Node<T>* temp=front;
        if(front==rear)
        {
            front=rear=NULL;
        }
        else
        {
            front=front->next;
            front->prev=NULL;
        }
        cout<<temp->data<<" Popped from Front"<<endl;
        delete temp;
        count--;
    }
    void SrchVal(T val)
    {
        if(isEmpty())
        {
            Empty();
            return;
        }
        int index=0;
        Node<T>* temp=front;
        while(temp!=NULL)
        {
            if(temp->data==val)
            {
                cout<<val<<" found at position "<<index+1<<" of the Queue"<<endl;
                return;
            }
            index++;
            temp=temp->next;
        }
        cout<<val<<" doesn't exist in the Queue!"<<endl;
    }
    void Traverse()
    {
        if(isEmpty())
        {
            Empty();
            return;
        }
        Node<T>* temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void getSize()
    {
        cout<<"The number of value in th Queue is "<<count<<endl;
    }
    ~Deque()
    {
        Node<T>*temp=front;
        while(!isEmpty())
        {
            pop_front();
        }
        cout<<"Queue Destroyed"<<endl;
    }
};
int main()
{
    Deque<int>q;
    q.push_rear(10);
    q.push_front(20);
    q.Traverse();
    q.pop_front();
    q.pop_rear();
    q.Traverse();
    q.push_front(10);
    q.push_front(20);
    q.push_front(30);
    q.push_front(40);
    q.push_front(50);
    q.push_front(60);
    q.push_rear(70);
    q.push_rear(80);
    q.push_rear(90);
    q.Traverse();
    q.SrchVal(100);
    q.SrchVal(50);
    q.SrchVal(90);
    q.pop_front();
    q.getSize();
    q.Traverse();
    Deque<string>q1;
    q1.push_rear("World");
    q1.push_front("Hello");
    q1.Traverse();
    q1.SrchVal("Hello");
    return 0;
}
