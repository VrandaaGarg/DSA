# Problem Statement: Count Inversions in an Array

## Problem Description

Given an integer array/list `ARR` of size `N` containing all distinct values, the task is to find the total number of **Inversions** that may exist in the array.

### Definition of an Inversion:

An **inversion** is defined for a pair of integers `(ARR[i], ARR[j])` when the following two conditions are met:

1. `ARR[i] > ARR[j]`
2. `i < j`

Where `i` and `j` denote the indices of the array, and `i` is less than `j`.

In simpler terms, an inversion is a pair of elements where the earlier element (at index `i`) is greater than the later element (at index `j`).

## Examples

### Sample Input 1:

3 3 2 1

### Sample Output 1:

3

**Explanation:**
We have a total of 3 pairs which satisfy the condition of inversion:

- (3, 2)
- (2, 1)
- (3, 1)

### Sample Input 2:

5 2 5 1 3 4

### Sample Output 2:

4

**Explanation:**
We have a total of 4 pairs which satisfy the condition of inversion:

- (2, 1)
- (5, 1)
- (5, 3)
- (5, 4)
