#include<iostream>
using namespace std;
class Node
{
    public:
    Node *next,*prev;
    int data;
    Node(int value)
    {
        data=value;
        next=prev=NULL;
    }
};
class Deque
{
    private:
    Node *front,*back;
    int size;
    public:
    Deque()
    {
        front=back=NULL;
        size=0;
    }
    bool isEmpty()
    {
        return front==NULL;
    }
    void push_back(int item)
    {
        Node* newNode=new Node(item);
        if(isEmpty())
        {
            front=back=newNode;
        }
        else
        {
            back->next=newNode;
            newNode->prev=back;
            back=newNode;
        }
        cout<<item<<" Pushed to Back"<<endl;
        size++;
    }
    void push_front(int item)
    {
        Node* newNode= new Node(item);
        if(isEmpty())
        {
            front=back=newNode;
        }
        else
        {
            newNode->next=front;
            front->prev=newNode;
            front=newNode;
        }
        cout<<item<<" Pushed to Front"<<endl;
        size++;
    }
    void pop_back()
    {
        Node* temp=back;
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        else if(front==back)
        {
            front=back=NULL;
        }
        else
        {
            back=back->prev;
            back->next=NULL;
        }
        cout<<temp->data<<" Popped from Back"<<endl;
        delete temp;
        size--;
    }
    void pop_front()
    {
        Node* temp=front;
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        else if(front==back)
        {
            front=back=NULL;
        }
        else
        {
            front=front->next;
            front->prev=NULL;
        }
        cout<<temp->data<<" Popped from Front"<<endl;
        delete temp;
        size--;
    }
    void peek_front()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        cout<<front->data<<" is the front element"<<endl;
    }
    void peek_back()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        cout<<back->data<<" is the back Element"<<endl;
    }
    void getSize()
    {
        cout<<"Size of Queue is : "<<size<<endl;
    }
    void traverse()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        Node* temp=front;
        cout<<"NULL<---";
        while(temp!=NULL)
        {
            cout<<temp->data<<"<--->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void revTraverse()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        Node*temp=back;
        cout<<"NULL<---";
        while(temp!=NULL)
        {
            cout<<temp->data<<"<--->";
            temp=temp->prev;
        }
        cout<<"NULL"<<endl;
    }
    void findVal(int item)
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        Node *temp=front;
        while(temp!=NULL)
        {
            if(temp->data==item)
            {
                cout<<item<<" is in the Queue"<<endl;
            return;
            }
            temp=temp->next;
        }
        cout<<item<<" doesn't exist in the Queue!"<<endl;
    }
    void clear()
    {
        while(!isEmpty())
        {
            pop_front();
        }
        cout<<"Queue Cleared"<<endl;
    }
    ~Deque() {
    while (!isEmpty()) {
        pop_front();
    }
    cout<<"Queue Destroyed"<<endl;
    }


};
int main()
{
    Deque q;
    q.push_back(50);
    q.push_back(60);
    q.push_back(70);
    q.push_front(40);
    q.clear();
    q.traverse();
    q.pop_back();
    q.getSize();
    q.traverse();
    q.push_front(40);
    q.push_front(40);
    q.push_front(40);
    q.push_front(40);
    q.pop_front();
    q.getSize();
    q.pop_back();
    q.peek_back();
    q.traverse();
    q.pop_front();
    q.peek_back();
    q.push_front(10);
    q.peek_front();
    q.getSize();
    q.traverse();
    q.revTraverse();
    q.findVal(5);
    q.findVal(10);
    return 0;
}