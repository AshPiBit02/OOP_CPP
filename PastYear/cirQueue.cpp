#include<iostream>
using namespace std;
class Node
{
    public:
    Node* next;
    int data;
    Node(int data)
    {
        this->data=data;
        next=nullptr;
    }
};
class CircularQueue
{
    private:
    Node* front,*rear;
    public:
    CircularQueue()
    {
        front=rear=nullptr;
    }
    bool isEmpty()
    {
        return front==nullptr;
    }
    void Insert(int item)
    {
        Node* newNode=new Node(item);
        if(isEmpty())
        {
            front=rear=newNode;
            rear->next=front;
        }
        else{
            rear->next=newNode;
            rear=newNode;
            rear->next=front;
        }
        cout<<item<<" Inserted"<<endl;
    }
    void Delete()
    {
        if(isEmpty())
        {
            cout<<"Circular Queue is Empty!"<<endl;
            return;
        }
        Node* temp=front;
        if(front==rear)
        {
            front=rear=nullptr;
        }
        else
        {
        front=front->next;
        rear->next=front;
        }
        cout<<temp->data<<" Deleted"<<endl;
        delete temp;
    }
    void Display()
    {
        if(isEmpty())
        {
            cout<<"Circluar Queue is Empty!"<<endl;
            return;
        }
        Node* temp=front;
        cout<<"-> ";
        do{
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }while(temp!=front);
        cout<<endl;
    }
    ~CircularQueue()
    {
        while(!isEmpty())
        {
            Delete();
        }
    }
};
int main()
{
    CircularQueue c;
    c.Insert(10);
    c.Insert(50);
    c.Insert(60);
    c.Insert(20);
    c.Insert(90);
    c.Display();
    c.Delete();
    c.Display();
    return 0;
}