#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
class CircularLL
{
    Node* head;
    Node* tail;
    public:
    CircularLL()
    {
        head=tail=NULL;
    }
    void InsertAtHead(int item)
    {
        Node* newNode=new Node(item);
        if(head==NULL)
        {
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            head=newNode;
            tail->next=head;
        }
        cout<<item<<" Inserted At Head Successfully"<<endl;
    }
    void InsertAtTail(int item)
    {
        Node* newNode=new Node(item);
        if(head==NULL)
        {
            head=tail=newNode;
            tail->next=head;
        }else{
           tail->next=newNode;
           tail=newNode;
           tail->next=head;
        }
        cout<<item<<" Inserted At Tail Successfully"<<endl;
    }
    void delAtHead()
    {
        if(head==NULL)
        {
            cout<<"Linked List is Empty!"<<endl;
        }
        else if(head==tail) //if there is only one node
        {
            cout<<"Head "<<head->data<<" Deleted Successfully"<<endl;
            delete head;
            head=tail=NULL; //set head and tail to NULL
        }
        else{
            Node* temp=head;
            head=head->next;
            tail->next=head;
            cout<<"Head "<<temp->data<<" Deleted successfully"<<endl;
            cout<<temp->next->data<<" Is the new Head Node"<<endl;
            temp->next=NULL;
            delete temp;
        }
    }
    void delAtTail()
    {
        if(head==NULL)
        {
            cout<<"Linked List is Empty!"<<endl;
        }
        else if(head==tail) //if there is only one node
        {
            cout<<"Tail "<<tail->data<<" Deleted Successfully"<<endl;
            delete tail;
            head=tail=NULL; //set head and tail to NULL
        }
        else{
          Node* temp=head;
            while(temp->next!=tail) //find the second last node
            {
                temp=temp->next;
            }
            cout<<"Tail "<<temp->next->data<<" Deleted Successfully"<<endl;
            delete temp->next;
            temp->next=NULL;
            tail=temp;
            cout<<tail->data<<" Is the new Tail Node"<<endl;
            tail->next=head;
        }
    }
    void display()
    {
        if(head==NULL)
        {
            cout<<"Linked List is Empty!"<<endl;
        }else{
            Node* temp=head;
            while(temp!=tail)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<temp->data<<"->"<<temp->next->data<<"........"<<endl;
        }
    }
};
int main()
{
    CircularLL cll;
    cll.InsertAtHead(50);
    cll.InsertAtHead(40);
    cll.InsertAtHead(30);
    cll.InsertAtHead(20);
    cll.InsertAtHead(10);
    cll.display();
    cll.InsertAtTail(60);
    cll.display();
    cll.delAtHead();
    cll.display();
    cll.delAtHead();
    cll.display();  
    cll.delAtHead();
    cll.display();  
    cll.delAtHead();
    cll.display();  
    cll.delAtHead();
    cll.display();  
    cll.delAtHead();
    cll.display();  
    cll.delAtHead();
    cll.display();  
    cll.delAtHead();
    cll.display();  
    return 0;
}