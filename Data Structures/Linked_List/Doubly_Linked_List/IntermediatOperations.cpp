#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        cout << "Node Created...." << endl;
        this->data = data;
        next = prev = nullptr;
    }
};

class Doubly {
private:
    Node* head;
    Node* tail;
    int count;

public:
    Doubly() {
        cout << "Doubly Linked List Constructed....." << endl;
        head = tail = nullptr;
        count = 0;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void InsertAtHead(int item) {
        Node* newNode = new Node(item);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        cout << item << " Inserted At Head" << endl;
        count++;
    }

    void InsertAtTail(int item) {
        Node* newNode = new Node(item) ;
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        cout << item << " Inserted At Tail" << endl;
        count++;
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
            head->prev = nullptr;
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
        Node* temp = tail;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;
        }
        cout << temp->data << " Deleted From Tail" << endl;
        delete temp;
        count--;
    }

    void Traverse() {
        if (isEmpty()) {
            cout << "Linked List is Empty!" << endl;
            return;
        }
        Node* temp = head;
        cout << "nullptr <- ";
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    void RevTraverse() {
        if (isEmpty()) {
            cout << "Linked List is Empty!" << endl;
            return;
        }
        Node* temp = tail;
        cout << "nullptr <- ";
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "nullptr" << endl;
    }

    void SrchItem(int item) {
        if (isEmpty()) {
            cout << "Linked List is Empty!" << endl;
            return;
        }
        int index = 0;
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == item) {
                cout << item << " Found at Position " << index + 1 << " of the Linked List" << endl;
                return;
            }
            temp = temp->next;
            index++;
        }
        cout << item << " Doesn't exist in the Linked List" << endl;
    }

    void DeleteAtPosition(int pos) {
        if (isEmpty()) {
            cout << "Linked List is Empty!" << endl;
            return;
        }
        if (pos < 1 || pos > count) {
            cout << "Position Out of Bound!" << endl;
            return;
        }
        if (pos == 1) {
            DeleteFromHead();
            return;
        }
        if (pos == count) {
            DeleteFromTail();
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }
        Node* del = temp->next;
        temp->next = del->next;
        del->next->prev = temp;
        cout << del->data << " Deleted From Position " << pos << endl;
        delete del;
        count--;
    }

    void InsertAtPosition(int pos, int item) {
        if (pos < 1 || pos > count + 1) {
            cout << "Position Out of Bound!" << endl;
            return;
        }
        if (pos == 1) {
            InsertAtHead(item);
            return;
        }
        if (pos == count + 1) {
            InsertAtTail(item);
            return;
        }
        Node* newNode = new Node(item);
        Node* temp = head;
        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
        cout << item << " Inserted At Position " << pos << endl;
        count++;
    }

    void size() {
        cout << "Size of Doubly Linked List : " << count << endl;
    }

    void clear() {
        while (!isEmpty()) {
            DeleteFromHead();
        }
        cout << "Doubly Linked List Cleared......" << endl;
    }

     ~Doubly() {
        clear();
        cout << "Doubly Linked List Destroyed...." << endl;
    }
};

int main() {
    Doubly dl;
    dl.InsertAtHead(10);
    dl.clear();
    dl.InsertAtHead(20);
    dl.InsertAtTail(30);
    dl.InsertAtTail(40);
    dl.Traverse();
    dl.InsertAtPosition(2, 25);
    dl.DeleteAtPosition(2);
    dl.DeleteFromHead();
    dl.DeleteFromTail();
    dl.Traverse();
    dl.RevTraverse();
    dl.SrchItem(30);
    dl.size();
    return 0;
}