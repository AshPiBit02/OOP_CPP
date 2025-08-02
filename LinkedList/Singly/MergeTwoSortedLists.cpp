#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

class list {
public:
    Node* head;
    Node* tail; // Add tail pointer
    list() : head(NULL), tail(NULL) {} // Initialize tail in constructor
    bool iscycle() {
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) {
                slow = head;
                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                cout << "Cycle found at node: " << slow->data << endl;
                return true;
            }
        }
        cout << "No cycle found." << endl;
        return false;
    }
    void insert(int data, int pos) {
        Node* newNode = new Node(data);
        if(pos == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        for(int i = 1; i < pos && temp != NULL; i++) {
            temp = temp->next;
        }
        if(temp == NULL) {
            cout << "Position out of bounds" << endl;
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
};

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        next = NULL;
    }
};
class Solution{
    public:
    ListNode* mergetTwoLists(ListNode* head1,ListNode* head2)
    {
        if(head1 == NULL || head2 == NULL)
        {
            return head1 =NULL ? head2 : head1;
        }
        if(head1->val < head2->val)
        {
            head1->next = mergetTwoLists(head1->next, head2);
            return head1;
        }
        else
        {
            head2->next = mergetTwoLists(head1, head2->next);
            return head2;
        }
    }
    ListNode* mergeTwoSortedLists(ListNode* list1, ListNode* list2) {
        return mergetTwoLists(list1, list2);
    }

    void display(ListNode* head)
    {
        ListNode* temp = head;
        while(temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    Solution sol;
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);
    list1->next->next = new ListNode(6);
    sol.display(list1);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(2);
    list2->next->next = new ListNode(5);
    list2->next->next = new ListNode(7);
    sol.display(list2);
    // Merging the two sorted linked lists
    cout<<"After merging the two sorted linked lists: " << endl;
    ListNode* mergedList = sol.mergeTwoSortedLists(list1, list2);
    sol.display(mergedList);
    list l;
    // Create a cycle: last node points to the node with value 30
    Node* temp = l.head;
    Node* cycleNode = nullptr;
    while(temp->next != nullptr) {
        if(temp->data == 30) cycleNode = temp;
        temp = temp->next;
    }
    temp->next = cycleNode; // last node's next points to node with value 30

    // Test for cycle
    l.iscycle(); // This will print where the cycle is found

    // Do NOT call l.display() after creating a cycle, or it will loop forever!
    return 0;
}

