# Problem: Reverse Array After a Given Position

## Problem Statement

Given an array (or list) `ARR` of integers and an integer `M`, which represents a position in the array, your task is to reverse the array starting from position `M + 1` until the end of the array.

### Notes:

- Position `M` is 0-based, meaning the index starts from 0.
- Only the subarray from position `M + 1` to the end should be reversed.

### Example

**Input:**

- `ARR` = {1, 2, 3, 4, 5, 6}
- `M` = 3

**Output:**

- `{1, 2, 3, 4, 6, 5}`

**Explanation:**  
For `ARR = {1, 2, 3, 4, 5, 6}` and `M = 3`, the elements after position `3` are `{5, 6}`. Reversing this subarray gives `{6, 5}`, so the output is `{1, 2, 3, 4, 6, 5}`.
