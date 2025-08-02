#include<iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val)
    {
        this->val=val;
        next=NULL;
    }
};
class LinkedList{
    public:
    ListNode* head;
    LinkedList()
    {
        head=NULL;
    }
    void push_front(int item)
    {
        ListNode* newNode=new ListNode(item);
        if(head==NULL)
        {
            head=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
        cout<<item<<" pushed successfully"<<endl;
    }
    void reverse()
    {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        while(curr != NULL)
        {
            next = curr->next;   // Store next node
            curr->next = prev;   // Reverse current node's pointer
            prev = curr;         // Move prev to current
            curr = next;         // Move to next node
        }
        head = prev; // Update head to the new front
    }
    void display()
    {
        if(head==NULL)
        {
            cout<<"Linked List is empty!"<<endl;
        }else{
            ListNode* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->val<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
    }

};
int main()
{
    LinkedList ll;
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);
    ll.display();
    ll.reverse();
    cout<<"Linked List reversed!"<<endl;
    ll.display();
    return 0;
}