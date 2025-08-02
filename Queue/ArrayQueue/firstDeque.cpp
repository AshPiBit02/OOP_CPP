//Double Ended Queue/DeQueue/Deque
#include<iostream>
using namespace std;
#define Max_size 7
int front = -1;
int rear = -1;
int que[Max_size];

void enqueue_front(int item)
{
    if ((front == 0 && rear == Max_size - 1) || (front == rear + 1)) {
        cout << "Queue is Full!" << endl;
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = Max_size - 1;
    } else {
        front = front - 1;
    }
    que[front] = item;
    cout << item << " Enqueued From Front Successfully" << endl;
}

void enqueue_rear(int item)
{
    if ((front == 0 && rear == Max_size - 1) || (front == rear + 1)) {
        cout << "Queue is Full!" << endl;
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (rear == Max_size - 1) {
        rear = 0;
    } else {
        rear = rear + 1;
    }
    que[rear] = item;
    cout << item << " Enqueued From Rear Successfully" << endl;
}
void dequeue_front()
{
    if (front == -1) {
        cout << "Queue is Empty!" << endl;
        return;
    }
    cout << que[front] << " Dequeued Successfully" << endl;
    if (front == rear) {
        front = rear = -1;
    } else if (front == Max_size - 1) {
        front = 0;
    } else {
        front = front + 1;
    }
}
void dequeue_rear()
{
    if (front == -1) {
        cout << "Queue is Empty!" << endl;
        return;
    }
    cout << que[rear] << " Dequeued Successfully" << endl;
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = Max_size - 1;
    } else {
        rear = rear - 1;
    }
}

void traverse()
{
    if (front == -1) {
        cout << "Queue is Empty!" << endl;
        return;
    }
    int i = front;
    while (true) {
        cout << que[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % Max_size;
    }
    cout << endl;
}

int main()
{
    enqueue_front(10);
    enqueue_front(20);
    traverse();
    enqueue_rear(30);
    traverse();
    enqueue_rear(40);
    traverse();
    dequeue_front();
    traverse();
    dequeue_rear();
    traverse();
    return 0;
}