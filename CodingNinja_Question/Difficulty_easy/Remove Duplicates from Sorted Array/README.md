# Problem Statement: Remove Duplicates from Sorted Array

## Problem Description

You are given a sorted integer array `arr` of size `n`.

Your task is to remove the duplicates from the array such that each element appears only once.

You need to modify the input array in-place and return the length of the new array.

### Constraints:

- Do not allocate extra space for another array.
- You need to modify the given input array in place with **O(1)** extra memory.

## Input Format

- The first line contains an integer `n`, denoting the size of the array `arr`.
- The second line contains `n` space-separated integers, denoting the elements of the array.

## Output Format

- A single integer representing the length of the new array after removing duplicates.

## Example

### Sample Input 1:

5 1 2 2 2 3

### Sample Output 1:

3

**Explanation:**
After removing duplicates, the new array will be `[1, 2, 3]`. The length of the new array is `3`.

### Sample Input 2:

4 1 1 1 1

### Sample Output 2:

1
