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
class SLL
{
    public:
    Node* head;
    Node* tail;
    SLL()
    {
        head=tail=NULL;
    }
    void push_front(int item)
    {
        Node* newNode=new Node(item);
        if(head==NULL)
        {
            head=tail=newNode;
        }else
        {
            newNode->next=head;
            head=newNode;
        }
        cout<<item<<" Pushed from front."<<endl;
    }
    void push_back(int item)
    {
        Node* newNode = new Node(item);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cout << item << " Pushed from back" << endl;
    }
    void pop_front()
    {
        if(head==NULL)
        {
            cout<<"Linked List is Empty!"<<endl;
        }
        else if(head->next==NULL)//or we can use (head==tail) 
        {
            cout<<head->data<<" Popped Successfully from Head"<<endl;
            delete head;
            head=tail=NULL;
        }
        else
        {
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            cout<<temp->data<<" Popped successfully from Head"<<endl;
            delete temp;
        }
    }
    void pop_back()
    {
        if(head==NULL)
        {
            cout<<"Linked list is empty!"<<endl;
            return;
        }
        else if(head == tail) // Only one node
        {
            cout<<head->data<<" Popped successfully from Tail"<<endl;
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node* temp = head;
            while(temp->next != tail) // Find the second last node
            {
                temp = temp->next;
            }
            cout<<tail->data<<" Popped successfully from Tail"<<endl;
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
        
    }
    void insertAt(int item, int pos)
    {
        if (pos < 0)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        if (pos == 0)
        {
            push_front(item);
            return;
        }
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position out of bound!" << endl;
                return;
            }
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "Position out of bound!" << endl;
            return;
        }
        Node* newNode = new Node(item);
        newNode->next = temp->next;
        temp->next = newNode;
        cout<<item<<" Inserted at position "<<pos<<" successfully"<<endl;
        if (newNode->next == NULL)
            tail = newNode;
    }
    void deleteAt(int pos)
    {
        if(pos<0)
        {
            cout<<"Invalid Postion!"<<endl;
            return;
        }
        if(pos==0)
        {
            pop_front();
            return;
        }
        Node* temp=head;
        for(int i=0;i<pos-1;i++)
        {
            if(temp==NULL || temp->next == NULL)
            {
                cout<<"Linked List is Empty!, No data to delete."<<endl;
                return;
            }
            temp=temp->next;
        }
        if(temp==NULL || temp->next == NULL)
        {
            cout<<"Linked List is Empty!, No data to delete."<<endl;
            return;
        }
        Node* delNode = temp->next;
        cout<<delNode->data<<" Item at Position "<<pos<<" Deleted successfully"<<endl;
        temp->next = delNode->next;
        if(temp->next==NULL)
        {
            tail=temp;
        }
        delete delNode;
    }
    void display()
    {
        if(head==NULL)
        {
            cout<<"Linked List is Empty!"<<endl;
        }else
        {
            Node* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;

        }
    }
    void clear()
    {
        Node* temp;
        while(head!=NULL)
        {
            temp=head;
            head=head->next;
            delete temp;
        }
    }
    
    ~SLL()
    {
        clear();
        cout<<"Allocated Memory Freed."<<endl;
    }
};
int main ()
{
    SLL sll;
    sll.push_front(30);
    sll.push_front(20);
    sll.push_front(10);
    sll.display();
    sll.push_back(40);
    sll.display();
    sll.pop_front();
    sll.display();
    sll.pop_back();
    sll.display();
    sll.insertAt(50,2);
    sll.display();
    sll.deleteAt(1);
    sll.display();
    return 0;
}