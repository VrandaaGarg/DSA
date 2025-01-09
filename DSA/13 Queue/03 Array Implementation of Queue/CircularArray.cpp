#include <bits/stdc++.h>
using namespace std;

struct Queue
{

    int front, rear;
    int *arr;
    int max;
    Queue(int c)
    {
        max = c;            // max size of queue
        front = rear = -1;  // initially front and rear are at -1
        arr = new int[max]; // dynamic memory allocation
    }

    void enqueue(int x)
    {
        if ((rear + 1) % max == front) // Overflow Condition
        {
            cout << "OVERFLOW" << endl;
            return;
        }

        // Updating front and rear
        if (front == -1)
        {
            front++;
        }

        rear = (rear + 1) % max;
        arr[rear] = x;
    }

    void dequeue()
    {
        if (front == -1) // Underflow Condition
        {
            cout << "UNDERFLOW" << endl;
            return;
        }

        // Updating front and rear
        if (front == rear)
        {
            front = rear = -1;
            return;
        }

        front = (front + 1) % max;
    }

    int getFront()
    {
        if (front == -1)
        {
            cout << "UNDERFLOW" << endl;
            return -1;
        }

        return arr[front];
    }

    int getRear()
    {
        if (front == -1)
        {
            cout << "UNDERFLOW" << endl;
            return -1;
        }

        return arr[rear];
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear + 1) % max == front;
    }
};