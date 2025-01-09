#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int front, rear;
    int *arr;
    int max;
    Queue(int c)
    {
        max = c;
        front = rear = -1;
        arr = new int[max];
    }

    void enque(int x)
    {
        if (front == max - 1)
        {
            cout << "OVERFLOW" << endl;
            return;
        }

        if (front == -1)
        {
            front++;
        }

        rear++;
        arr[rear] = x;
    }

    void deque()
    {
        if (front == -1)
        {
            cout << "UNDERFLOW" << endl;
            return;
        }

        if (front == rear)
        {
            front = rear = -1;
            return;
        }

        front++;
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
        if (rear == -1)
        {
            cout << "UNDERFLOW" << endl;
            return -1;
        }

        return arr[rear];
    }

    bool isFull()
    {
        return rear == -1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    int size()
    {
        if (front == -1)
        {
            cout << "UNDERFLOW" << endl;
            return -1;
        }

        return rear - front + 1;
    }
};

int main()
{
    Queue q(5);
    cout << q.size() << endl;
    q.deque();
    q.enque(10);
    q.enque(20);
    q.enque(30);
    cout << "FRONT: " << q.getFront() << endl;
    cout << "REAR: " << q.getRear() << endl;
    cout << q.size() << endl;
    q.deque();
    cout << "FRONT: " << q.getFront();

    return 0;
}