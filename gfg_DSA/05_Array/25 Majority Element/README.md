# Moore's Voting Algorithm: Finding Majority Element Index

The problem is to find the index of a majority element if it exists in an array. A **majority element** is defined as an element that appears more than `n/2` times in an array of size `n`. If no such element exists, the output should be `-1`.

## Problem Details

- **Input:** Array of integers.
- **Output:** Index of any occurrence of the majority element if it exists, otherwise `-1`.
- **Examples:**
  - Input: `arr[] = {8, 3, 4, 8, 8}`  
    Output: `0`, `3`, or `4` (index of any occurrence of `8`).
  - Input: `arr[] = {1, 2, 3, 4, 5}`  
    Output: `-1` (no majority element).

## Algorithm Explanation

The solution is based on **Moore's Voting Algorithm**, which works in two phases:

### Phase 1: Finding the Candidate for Majority Element

1. Initialize a `candidate` and a `count` variable.
2. Traverse the array:
   - If `count` is `0`, set the current element as the `candidate` and reset `count = 1`.
   - If the current element matches the `candidate`, increment `count`.
   - If the current element does not match, decrement `count`.
3. At the end of this phase, the `candidate` is the potential majority element.

### Phase 2: Verifying the Candidate

1. Traverse the array to count occurrences of the `candidate`.
2. If the count of the candidate is greater than `n/2`, return the index of **any occurrence** of the candidate.
3. Otherwise, return `-1`.

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Phase 1 and Phase 2 each traverse the array once.
- **Space Complexity:** `O(1)`
  - The algorithm uses only a constant amount of extra space.

## Key Points

- This algorithm does **not always return the first occurrence of the majority element**, but any occurrence is valid.
- The algorithm works efficiently for large datasets due to its linear time complexity.
