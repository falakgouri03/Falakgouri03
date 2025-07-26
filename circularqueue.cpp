#include<iostream>
using namespace std;

int q[100];
int front = -1;
int rear = -1;
int size = 6;

int isfull()
{
    return ((rear + 1) % size == front);
}

int isempty()
{
    return (front == -1);
}

void enqueue(int val)
{
    if (isfull())
    {
        cout << "Queue is full (Overflow)" << endl;
        return;
    }
    if (front == -1)  // First element
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % size;
    }
    q[rear] = val;
    cout << val << " is inserted" << endl;
}

void dequeue()
{
    if (isempty())
    {
        cout << "Queue is empty (Underflow)" << endl;
        return;
    }

    int ele = q[front];
    cout << ele << " is deleted" << endl;

    if (front == rear)  // Only one element
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % size;
    }
}

void display()
{
    if (isempty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue elements: ";
        int i = front;
        while (true)
        {
            cout << q[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();

    return 0;
}
