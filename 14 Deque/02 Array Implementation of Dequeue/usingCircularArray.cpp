#include <bits/stdc++.h>
using namespace std;

// initially front=0, rear=-1

// rear = (front + size - 1) % cap;
struct Deque
{
    int size, cap, front, rear;
    int *arr;
    Deque(int c)
    {
        size = 0; // no. of elements in deque
        cap = c;  // capacity of deque
        front = 0;
        arr = new int[cap];
    }

    bool isFull()
    {
        return size == cap;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void insertFront(int x)
    {
        if (isFull())
        {
            cout << "OVERFLOW" << endl;
            return;
        }

        front = (front + cap - 1) % cap; // to make it circular
        arr[front] = x;
        size++;
    }

    void deleteFront()
    {
        if (isEmpty())
        {
            cout << "UNDERFLOW" << endl;
            return;
        }

        front = (front + 1) % cap; // to make it circular
        size--;
    }

    void insertRear(int x)
    {
        if (isFull())
        {
            cout << "OVERFLOW" << endl;
            return;
        }

        int newRear = (front + size) % cap;
        arr[newRear] = x;
        size++;
    }

    void deleteRear()
    {
        if (isEmpty())
        {
            cout << "UNDERFLOW" << endl;
            return;
        }
        size--;
    }

    int getRear()
    {
        if (isEmpty())
        {
            cout << "UNDERFLOW" << endl;
            return -1;
        }
        return arr[(front + size - 1) % cap];
    }

    int getFront()
    {
        if (isEmpty())
        {
            cout << "UNDERFLOW" << endl;
            return -1;
        }
        return arr[front];
    }
};

int main()
{
    Deque dq(5);
    dq.insertFront(10);
    dq.insertFront(20);
    dq.insertRear(30);
    dq.insertRear(40);
    cout << dq.getFront() << endl;
    cout << dq.getRear() << endl;
    dq.deleteFront();
    cout << dq.getFront() << endl;
    dq.deleteRear();
    cout << dq.getRear() << endl;
    return 0;
}