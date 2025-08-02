#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data) {
        this->data=data;
        next = NULL;
    }
};
class List{
    public:
    Node* head;
    Node* tail;
    List(){
        head=tail=NULL;
    }
    void push_front(int item)
    {
        Node* newNode= new Node(item);//dynamically allocate memory for new node
        if(head==NULL)
        {
            head=tail=newNode; //if list is empty, set head and tail to new node
        }
        else
        {
            newNode->next=head; //link new node to the current head
            head=newNode; //update head to new node
        }
        cout<<item<<" pushed from front successfully"<<endl;
    }
    void push_back(int item)
    {
        Node* newNode=new Node(item);
        if(head==NULL)
        {
            head=tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
        cout<<item<<" pushed from back successfully"<<endl;


    }
    void pop_front()
    {
        if(head==NULL)
        {
            cout<<"Linked list is empty!"<<endl;
            return;
        }else{
            Node* temp=head;//temporary pointer to the head node
            head=head->next;
            temp->next=NULL; //disconnect the node from the list
            delete temp;
            cout<<"Front node popped successfully"<<endl;
        }

    }
    void pop_back()
    {
        if(head==NULL)
        {
            cout<<"Linked list is empty!"<<endl;
            return;
        }else{
            Node* temp=head;
            while(temp->next!=tail) //find the second last node
            {
                temp=temp->next;
            }
            cout<<tail->data<<" Popped from back Successfully"<<endl;
            temp->next=NULL; //disconnect the last node
            delete tail; //delete the last node
        }
        
    }
    void insert(int item,int pos)
    {
        if(pos<0)
        {
            cout<<"Invalid position!"<<endl;
            return;
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
            if(temp==NULL)
            {
                cout<<"Position out of bounds!"<<endl;
            }
            Node* newNode=new Node(item);//create a new node
            newNode->next=temp->next;//link new node to the next node
            temp->next=newNode; //insert the new node at the specified position
            if(newNode->next=NULL)
            {
                tail=newNode;
            }
        }
    }
    int search(int key){
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
    void displayLL()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next; //move to the next node
        }
        cout<<"NULL"<<endl;

    }
};
int main()
{
    List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.pop_back();
    ll.displayLL(); // Output: 30 20 10
    ll.push_back(5);
    ll.displayLL();
    ll.pop_front(); // Removes 30
    ll.displayLL();
    ll.pop_back(); // Removes 5
    ll.displayLL(); // Output: 20 10
    ll.insert(15, 1); // Inserts 15 at position 1
    ll.displayLL(); // Output: 20 15 10
    cout<<ll.search(15)<<endl;
    ll.pop_front();
    ll.pop_front();
    ll.pop_front();
    ll.insert(1,2);
    return 0;
}