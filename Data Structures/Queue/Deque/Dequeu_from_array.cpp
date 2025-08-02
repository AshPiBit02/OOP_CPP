#include<iostream>
using namespace std;

template<class T>
class Deque {
    T *arr;
    int front, rear;
    int size, count;

public:
    Deque(int size) {
        this->size = size;
        front = rear = -1;
        arr = new T[size];
        count = 0;
    }

    bool isFull() {
        return count == size;
    }

    bool isEmpty() {
        return count == 0;
    }

    void push_rear(T item) {
        if (isFull()) {
            cout << "Queue is Full\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        arr[rear] = item;
        count++;
        cout << item << " Enqueued to Rear\n";
    }

    void push_front(T item) {
        if (isFull()) {
            cout << "Queue is Full\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else if (front > 0) {
            front--;
        } else {
            // Shift elements right if space is available
            for (int i = rear + 1; i > front; i--) {
                arr[i] = arr[i - 1];
            }
            rear++;
        }
        arr[front] = item;
        count++;
        cout << item << " Pushed to Front\n";
    }

    void pop_rear() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        cout << arr[rear] << " Popped from Rear\n";
        if (front == rear) {
            front = rear = -1;
        } else {
            rear--;
        }
        count--;
    }

    void pop_front() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        cout << arr[front] << " Popped from Front\n";
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        count--;
    }

    void Traverse() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Deque contents: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Deque() {
        cout<<"Deque Destroyed"<<endl;
        delete[] arr;
    }
};

int main() {
    Deque<int> q(6);
    Deque<char> q1(6);
    q.push_rear(10);
    q.push_rear(20);
    q.push_rear(30);
    q.push_rear(40);
    q.push_front(5);
    q.Traverse();
    q.pop_front();
    q.Traverse();
    q.pop_rear();
    q.Traverse();
    q.push_rear(40);
    q.Traverse();
    q.push_front(30);
    q.push_front(20);
    q.Traverse();
    q.pop_front();
    q.Traverse();
    q.push_rear(50);
    q.Traverse();
    q1.push_rear('B');
    q1.push_rear('C');
    q1.push_rear('D');
    q1.push_rear('E');
    q1.push_front('A');
    q1.Traverse();
    q1.pop_rear();
    q1.Traverse();
    q1.pop_front();
    q1.Traverse();
    return 0;
}