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
class list
{
    public:
    Node* head;
    list()
    {
        head=NULL;
    }
    void push(int item)
    {
        Node* newNode=new Node(item);
        if(head==NULL)
        {
            head=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
        cout<<item<<" pushed successfully"<<endl;
    }
    bool iscycle()
    {
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            {
                slow=head;
                while(slow!=fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                cout<<"Cycle found at node: "<<slow->data<<endl;
             return true;
            }
        }
        return false;
    }
    void display()
    {
        if(head==NULL)
        {
            cout<<"Linked List is empty!"<<endl;
        }
        else
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
};
int main()
{
    list l;
    l.push(50);
    l.push(40);
    l.push(30);
    l.push(20);
    l.push(10);
    l.display();

    // Create a cycle: make the last node (50) point to the node with value 30
    Node* temp = l.head;
    Node* cycleNode = nullptr;
    while(temp->next != nullptr) {
        if(temp->data == 30) cycleNode = temp;
        temp = temp->next;
    }
    temp->next = cycleNode; // last node's next points to node with value 30

    // Now the list has a cycle
    cout << l.iscycle(); // Should print 1 (true)
    return 0;
}