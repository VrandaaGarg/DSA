#include <bits/stdc++.h>
using namespace std;

// Circular sub array of {10,5,-5} are {10,5,-5}, {5,-5,10}, {-5,10,5}, {10}, {5}, {-5}, {10,5}, {5,-5}, {-5,10}

// Idea is to irst find the minimum subarray sum and then subtract it from total sum of array to get the maximum subarray sum
// Example: {10,5,-5} => min subarray sum = -5, total sum = 10+5-5 = 10, max subarray sum = 10-(-5) = 15
// Example2: {5,-2,3,4} => min subarray sum = -2, total sum = 5-2+3+4 = 10, max subarray sum = 10-(-2) = 12
// Example 3: {8,-4,3,-5,4} => min subarray sum = -4, total sum = 8-4+3-5+4 = 6, max subarray sum = 6-(-4) = 10

// This is modified Kadane's algorithm

int normalMaxSum(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        // maxEnding will be max of maxEnding+arr[i] and arr[i] because we want to find max subarray sum
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int overallMaxSum(int arr[], int n)
{
    int maxNormal = normalMaxSum(arr, n);

    // If all elements are negative then maxNormal will be the answer
    if (maxNormal < 0)
        return maxNormal;

    // If all elements are positive then maxCircular will be the answer
    int arrSum = 0;

    // if all elements are negative then maxNormal will be the answer an if we remove the if condition od maxNormal<0 then it will always return 0 so that if is must
    // Calculating arr sum and also invert the sign of all elements
    for (int i = 0; i < n; i++)
    {
        arrSum += arr[i];
        // Invert the sign of all elements
        arr[i] = -arr[i];
    }

    // now we have a inverted sign array and we have to find the max subarray sum of this array
    int maxCircular = arrSum + normalMaxSum(arr, n);
    return max(maxNormal, maxCircular);
}

int main()
{
    int arr[] = {8, -4, 3, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << overallMaxSum(arr, n);
    return 0;
}
