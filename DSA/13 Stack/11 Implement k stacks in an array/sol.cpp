#include <bits/stdc++.h>
using namespace std;

//in main in push we will have two parameter two pass 1. data and 2. stack number\
//stack no. {0,......k-1} as k stacks r there in array

// Explanation:
// we will have 3 arrays
// 1. arr[]: to store the elements of the stacks
// 2. top[]: to store the top element of the stacks
// 3. next[]: to store the next element of the stack
// 4. freeTop: to store the free top element of the stack
// size of arr[] = n , size of top[] = k, size of next[] = n

struct kStacks
{
    int *arr;
    int *top;
    int *next;
    int k, freeTop, cap;
    kStacks(int k1, int n)
    {
        k = k1;
        cap = n;
        arr = new int[cap];
        top = new int[k];
        next = new int[cap];
        freeTop = 0;
        for (int i = 0; i < k; i++)
        {
            top[i] = -1;
        }
        for (int i = 0; i < cap - 1; i++)
        {
            next[i] = i + 1;
        }
        next[cap - 1] = -1;
    }

    void push(int data, int sn)
    {
        if (freeTop == -1)
        {
            cout << "Stack Overflow\n";
            return;
        }
        int i = freeTop;
        freeTop = next[i];
        next[i] = top[sn];
        top[sn] = i;
        arr[i] = data;
    }

    int pop(int sn)
    {
        if (top[sn] == -1)
        {
            cout << "Stack Underflow\n";
            return INT_MAX;
        }
        int i = top[sn];
        top[sn] = next[i];
        next[i] = freeTop;
        freeTop = i;
        return arr[i];
    }

    // bool isEmpty(int sn)
    // {
    //     return top[sn] == -1;
    // }

    // int size(int sn)
    // {
    //     int count = 0;
    //     int i = top[sn];
    //     while (i != -1)
    //     {
    //         count++;
    //         i = next[i];
    //     }
    //     return count;
    // }
};

int main()
{
    int k = 3, n = 10;
    kStacks ks(k, n);

    ks.push(15, 2);
    ks.push(45, 2);

    ks.push(17, 1);
    ks.push(49, 1);
    ks.push(39, 1);

    ks.push(11, 0);
    ks.push(9, 0);
    ks.push(7, 0);

    cout << "Popped element from stack 2 is " << ks.pop(2) << endl;
    cout << "Popped element from stack 1 is " << ks.pop(1) << endl;
    cout << "Popped element from stack 0 is " << ks.pop(0) << endl;

    ks.push(11, 0);
    ks.push(9, 0);
    return 0;
}