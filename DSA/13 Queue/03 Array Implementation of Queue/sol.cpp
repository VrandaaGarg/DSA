#include <bits/stdc++.h>
using namespace std;

// We maintain front at the starting of the queue and rear at the end of the queue.

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

    void enque(int x)
    {
        if (front == max - 1) // Overflow Condition
        {
            cout << "OVERFLOW" << endl;
            return;
        }

        // Updating front and rear
        if (front == -1)
        {
            front++;
        }

        rear++;
        arr[rear] = x;
    }

    void deque()
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

        front++;
    }

    // OR
    // void deque(){
    //      if(front == -1){
    //          cout << "UNDERFLOW" << endl;
    //          return;
    //      }
    //      for(int i = 0; i < size-1; i++){
    //          arr[i] = arr[i+1];
    //      }
    //      size--;
    //  }

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