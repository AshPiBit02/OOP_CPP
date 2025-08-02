#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
class List{
    public:
    Node* head;
    Node* tail;
    List()
    {
        head=tail=NULL;
    }
    void push_front(int item)
    {
        Node* newNode=new Node(item);
        if(head==NULL)
        {
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
        cout<<item<<" pushed from front successfully"<<endl;
    }
    void push_back(int item)
    {
        Node* newNode=new Node(item);
        if(head==NULL)
        {
            cout<<"Linked List is emplty!"<<endl;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
        cout<<item<<" pushed from back successfully"<<endl;
    }
    void pop_front()
    {
        if(head==NULL)
        {
            cout<<"Linked List is empty!"<<endl;
        }
        else
        {
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
            cout<<"Front node popped successfully"<<endl;
        }
    }
    void pop_back()
    {
        if(head==NULL)
        {
            cout<<"Linked List is empty"<<endl;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            delete temp;
            cout<<"Tail node popped successfully"<<endl;
        }
    }
    void insert(int item,int pos)
    {
        if(pos<0)
        {
            cout<<"Invalid Position!"<<endl;
        }
        else if(pos==0)
        {
            push_front(item);
        }
        else
        {
            Node* temp=head;
            for(int i=0;i<pos-1;i++)
            {
                if(temp==NULL)
                {
                    cout<<"Position out of bounds!"<<endl;
                    return;
                }
                temp=temp->next;
            }
            Node* newNode=new Node(item);
            newNode->next=temp->next;
            temp->next=newNode;
        }
    }
    int search(int key)
    {
        Node* temp=head;
        int idx=0;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }
    void display()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main()
{
    List ll;
    ll.push_front(10);//10->NULL
    ll.push_front(20);//20->10->NULL
    ll.push_front(30);//30->20->10->NULL
    ll.push_back(50);//30->20->10->50->NULL
    ll.push_back(60);//30->20->10->50->60->NULL
    ll.display();
    ll.insert(40,4);
    ll.display();///30->20->10->50->40->60->NULL
    ll.pop_front();
    ll.display();//20->10->50->40->60->NULL
    cout<<ll.search(50);//2
    ll.insert(5,2);
    ll.display();
    return 0;
}