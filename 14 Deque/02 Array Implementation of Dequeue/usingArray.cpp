#include <bits/stdc++.h>
using namespace std;

// Operations :
// ImsertFront, InsertRear, DeleteFront, DeleteRear, getFront, getRear, isEmpty, isFull, size

// It will be done using circular array

// Implementation:
// front always at 0
// rear always at size-1

// So the time complexity of insertFront and InsertRear is O(1)
//  and for deleteFront and deleteRear is O(n)
// where n is the size of deque

// always get front at 0 index
// always get rear at size-1 index
struct Deque
{
    int size, cap;
    int *arr;
    Deque(int c)
    {
        size = 0;
        cap = c;
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

        for (int i = size - 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = x;
        size++;
    }

    void deleteFront()
    {
        if (isEmpty())
        {
            cout << "UNDERFLOW" << endl;
            return;
        }

        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void insertRear(int x)
    {
        if (isFull())
        {
            cout << "OVERFLOW" << endl;
            return;
        }

        size++;
        arr[size - 1] = x;
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
        return arr[size - 1];
    }

    int getFront()
    {
        if (isEmpty())
        {
            cout << "UNDERFLOW" << endl;
            return -1;
        }
        return arr[0];
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