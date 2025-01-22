#include <bits/stdc++.h>
using namespace std;

// example: arr[]={10,8,5,12,15,7,6}
// k=3
// O/P: 10 12 15 15 15

// total subbarays will be : n-k+1
// so there will be n-k+1 elements in output array

// OPTIMXED SOL
// using deque either using doubly ll,circular array
// maintain the deque in such a way that size of deque is k;
// front of deque stores the max of the current window

// Concept: let say our current window has 5,8,10
// we push 5
// so if our next element is greater than 5 then we push it if not then we first empty our deque then push the element
// so here 8 is greater so we first empty the deque then push 8
// deletion will be done at the beginning and push will be done at the end
// so max will be at the front
// REMEMBER: here we are storing index as well as the data in deque
// as when we move to next window we the current element is not of use we pop it by using its index

// Conclusion:
// storing index in deque
// in current windoow:
// 1. pushing the smaller element index at the rear
// 2. poping all elements index if greater element comes and then pushing the greater elemement index
// when moving to next window poping the element index which r not the part of current window

// Time complexity : O(n)

void printMaxk(int arr[], int n, int k)
{
    deque<int> dq;
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && arr[i] >= arr[dq.back()]) // poping all elements index if greater element comes and checking if deque is empty
        {
            dq.pop_back();
        }
        dq.push_back(i); // pushing the smaller element index at the rear
    }

    for (int i = k; i < n; i++)
    {
        cout << arr[dq.front()] << " ";
        while (!dq.empty() && dq.front() <= i - k) // when moving to next window poping the element index which r not the part of current window
        {
            dq.pop_front();
        }
        while (!dq.empty() && arr[i] >= arr[dq.back()]) // poping all elements index if greater element comes and checking if deque is empty
        {
            dq.pop_back();
        }
        dq.push_back(i); // pushing the smaller element index at the rear
    }
    cout << arr[dq.front()] << " ";
};

int main()
{
    int arr[] = {20, 40, 30, 10, 60};
    printMaxk(arr, 5, 3);
    return 0;
}