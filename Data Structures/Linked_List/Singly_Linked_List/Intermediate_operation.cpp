#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        cout << "Node Created!" << endl;
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
    Node* head;
    Node* tail;
    int count;

public:
    LinkedList() {
        cout << "Linked List Created!" << endl;
        head = tail = nullptr;
        count = 0;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void InsertAtTail(int item) {
        Node* newNode = new Node(item);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        count++;
        cout << item << " Inserted At Tail" << endl;
    }

    void InsertAtHead(int item) {
        Node* newNode = new Node(item);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        count++;
        cout << item << " Inserted At Head" << endl;
    }

    void DeleteFromHead() {
        if (isEmpty()) {
            cout << "Linked List is Empty!" << endl;
            return;
        }
        Node* temp = head;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
        }
        cout << temp->data << " Deleted From Head" << endl;
        delete temp;
        count--;
    }

    void DeleteFromTail() {
        if (isEmpty()) {
            cout << "Linked List is Empty!" << endl;
            return;
        }
        if (head == tail) {
            cout << tail->data << " Deleted From Tail" << endl;
            delete tail;
            head = tail = nullptr;
        } else {
            Node* iter = head;
            while (iter->next != tail) {
                iter = iter->next;
            }
            cout << tail->data << " Deleted From Tail" << endl;
            delete tail;
            tail = iter;
            tail->next = nullptr;
        }
        count--;
    }

    void InsertAtPosition(int pos, int item) {
        if (pos < 1 || pos > count + 1) {
            cout << "Position out of bounds!" << endl;
            return;
        }
        if (pos == 1) {
            InsertAtHead(item);
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }
        Node* newNode = new Node(item);
        newNode->next = temp->next;
        temp->next = newNode;
        if (newNode->next == nullptr) {
            tail = newNode;
        }
        count++;
        cout << item << " Inserted At Position " << pos << endl;
    }

    void DeleteFromPosition(int pos) {
        if (isEmpty()) {
            cout << "Linked List is Empty!" << endl;
            return;
        }
        if (pos < 1 || pos > count) {
            cout << "Position out of bounds!" << endl;
            return;
        }
        if (pos == 1) {
            DeleteFromHead();
            return;
        }
        if(count==pos)
        {
            DeleteFromTail();
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }
        Node* del = temp->next;
        temp->next = del->next;
        // if (del == tail) {
        //     tail = temp;
        // }
        cout << del->data << " Deleted From Position " << pos << endl;
        delete del;
        count--;
    }

    void Traverse() {
        if (isEmpty()) {
            cout << "Linked List is Empty" << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    void SrchItem(int item) {
        if (isEmpty()) {
            cout << "Linked List is Empty!" << endl;
            return;
        }
        Node* temp = head;
        int index = 1;
        while (temp != nullptr) {
            if (temp->data == item) {
                cout << item << " Found at Position " << index << endl;
                return;
            }
            temp = temp->next;
            index++;
        }
        cout << item << " Doesn't exist in the Linked List!" << endl;
    }
    void size() {
        cout << "Size of Linked List: " << count << endl;
    }
    void ClearLinkedList() {
        while (!isEmpty()) {
            DeleteFromHead();
        }
        cout << "Linked List Cleared" << endl;
    }

    ~LinkedList() {
        ClearLinkedList();
        cout << "Linked List Destroyed!!!!!" << endl;
    }
};

int main() {
    LinkedList ll;
    ll.InsertAtHead(50);
    ll.InsertAtHead(60);
    ll.InsertAtTail(70);
    ll.Traverse();
    ll.DeleteFromHead();
    ll.DeleteFromTail();
    ll.DeleteFromHead();
    ll.InsertAtPosition(1, 90);
    ll.Traverse();
    ll.DeleteFromPosition(1);
    ll.InsertAtHead(30);
    ll.InsertAtHead(20);
    ll.InsertAtHead(10);
    ll.size();
    ll.DeleteFromTail();
    ll.Traverse();
    ll.SrchItem(90);
    ll.SrchItem(110);
    ll.SrchItem(60);
    ll.Traverse();
    ll.ClearLinkedList();
    return 0;
}