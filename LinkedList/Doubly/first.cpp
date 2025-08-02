#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data)
    {
        this->data=data;
        next=prev=NULL;
    }
};
class DoublyList
{
    public:
    Node* head;
    Node* tail;
    DoublyList()
    {
        head=tail=NULL;
    }
    void push_front(int item)
    {
        Node* newNode= new Node(item);
        if(head==NULL)
        {
            head=tail=newNode;
        }else{

            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
        cout<<item<<" Pushed From Front Successfully"<<endl;
    }
    void push_back(int item)
    {
        Node* newNode=new Node(item);
            if(head==NULL)
            {
                head=tail=newNode;
            }else{
                newNode->prev=tail;
                tail->next=newNode;
                tail=newNode;
            }
        cout<<item<<" Pushed From Back Successfully"<<endl;
    }
    void pop_front()
    {
        Node* temp=head;
        if(temp==NULL)
        {
            cout<<"Linked List is Empty!"<<endl;
        }else{
            head=head->next;
            head->prev=NULL;
            cout<<temp->data<<" Poped Successfully From Front"<<endl;
            delete temp;
        }
    }
    void pop_back()
    {
        Node* temp=head;
        if(head==NULL)
        {
            cout<<"Linked List is Empty!"<<endl;
        }else{
            while(temp->next!=tail)
            {
                temp=temp->next;
            }
            temp->prev=temp;
            temp->next=NULL;
            cout<<temp->data<<" Poped Successfully From Back"<<endl;
            delete temp;

        }
    }
    void display()
    {
        Node* temp=head;
        if(head==NULL)
        {
            cout<<"Linked List is empty!"<<endl;
        }else{
            cout<<"NULL<-";
            while(temp!=NULL)
            {
                if(temp->next==NULL)
                {
                    cout<<temp->data;
                    cout<<"->";
                    break;
                }
                cout<<temp->data<<"<=>";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
    }
    
};
int main()
{
    DoublyList dll;
    dll.push_front(30);
    dll.push_front(25);
    dll.push_front(20);
    dll.push_front(15);
    dll.push_front(10);
    dll.push_front(5);
    dll.push_back(35);
    dll.push_back(40);
    dll.display();
    dll.pop_front();
    dll.display();
    dll.pop_back();
    dll.display();
    return 0;
}