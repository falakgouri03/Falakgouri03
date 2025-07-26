#include<iostream>
using namespace std;

int q[100];
int front = -1;
int rear = -1;
int size = 5;

int isfull() {
    return (rear == size - 1);
}

int isempty() {
    return (front == -1 || front > rear);
}

void enqueue(int value) {
    if (isfull()) {
        cout << "Overflow" << endl;
        return;
    }
    if (front == -1) front = 0;
    rear++;
    q[rear] = value;
    cout << value << " inserted into queue." << endl;
}

void dequeue() {
    if (isempty()) {
        cout << "Underflow" << endl;
        return;
    }
    cout << q[front] << " deleted from queue." << endl;
    front++;
}

void display() {
    if (isempty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << q[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(11);
    enqueue(12);
    display();
    dequeue();
    display();
    return 0;
}
