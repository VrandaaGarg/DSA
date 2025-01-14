#include <bits/stdc++.h>
using namespace std;

// Enqueue is done at the rear
// Dequeue is done at the front

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Queue
{
    Node *front, *rear;
    int top;
    Queue()
    {
        front = NULL;
        rear = NULL;
        top = 0;
    }

    // Corner case:
    // 1. when queue is empty so both front and rear will be updated
    void enque(int x)
    {
        Node *newNode = new Node(x);
        if (front == NULL)
        {
            front = rear = newNode;
            top++;
            return;
        }
        rear->next = newNode;
        rear = newNode;
        top++;
    }

    // Corner case:
    // 1. when underflow
    // 2. when only one element is present
    void deque()
    {
        if (front == NULL)
        {
            cout << "UNDERFLOW" << endl;
            return;
        }

        Node *temp = front;
        front = front->next;
        top--;
        if (front == NULL)
        {
            rear = NULL;
        }
        free(temp);
    }

    int size()
    {
        return top;
    }

    int getFront()
    {
        if (front == NULL)
        {
            return -1;
        }
        return front->data;
    }

    int getRear()
    {
        if (rear == NULL)
        {
            return -1;
        }
        return rear->data;
    }

    bool isEmpty()
    {
        return front == NULL;
    }
};

int main()
{
    Queue q;
    q.enque(10);
    q.enque(20);
    q.enque(30);
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    q.deque();
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    cout << q.size() << endl;
    cout << q.isEmpty() << endl;
    return 0;
}
