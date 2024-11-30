# Circular Subarray Maximum Sum using Modified Kadane's Algorithm

This implementation computes the maximum sum of a circular subarray. The key idea is to find the minimum subarray sum and subtract it from the total sum of the array.

## Problem Description

For a circular array, subarrays are not limited to contiguous indices but wrap around the start and end of the array. Given an array, the task is to find the maximum sum of such subarrays.

### Examples

1. **Input:** `{10, 5, -5}`  
   **Circular Subarrays:**  
   `{10, 5, -5}`, `{5, -5, 10}`, `{-5, 10, 5}`, `{10}`, `{5}`, `{-5}`, `{10, 5}`, `{5, -5}`, `{-5, 10}`  
   **Steps:**

   - Minimum Subarray Sum = `-5`
   - Total Sum = `10 + 5 - 5 = 10`
   - Maximum Subarray Sum = `10 - (-5) = 15`

2. **Input:** `{5, -2, 3, 4}`  
   **Steps:**

   - Minimum Subarray Sum = `-2`
   - Total Sum = `5 - 2 + 3 + 4 = 10`
   - Maximum Subarray Sum = `10 - (-2) = 12`

3. **Input:** `{8, -4, 3, -5, 4}`  
   **Steps:**
   - Minimum Subarray Sum = `-4`
   - Total Sum = `8 - 4 + 3 - 5 + 4 = 6`
   - Maximum Subarray Sum = `6 - (-4) = 10`

## Algorithm Explanation

The solution leverages a modification of Kadane's algorithm:

1. Compute the **total sum** of the array.
2. Find the **minimum subarray sum** using Kadane's algorithm.
3. Subtract the minimum subarray sum from the total sum to get the **maximum circular subarray sum**.
