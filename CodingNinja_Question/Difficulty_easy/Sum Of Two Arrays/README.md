# Sum of Two Numbers Represented by Arrays

## Problem Statement

You are given two numbers represented as arrays `A[]` and `B[]` of lengths `N` and `M`, respectively. Each element of these arrays represents a digit of the number, where the first index contains the most significant digit. Your task is to calculate the sum of these two numbers and return the result in the form of an array.

### Constraints

1. Both `A` and `B` have lengths greater than zero.
2. The first index of each array is the most significant digit. For instance, if `A[] = {4, 5, 1}`, it represents the number 451.
3. There are no leading zeros in `A` and `B`, and the result should not contain any leading zeros.

### Example

**Input:**

- `A[] = {4, 5, 1}`
- `B[] = {3, 4, 5}`

**Output:**

- `{7, 9, 6}`

**Explanation:**

- The numbers represented by `A` and `B` are 451 and 345, respectively.
- Their sum is 451 + 345 = 796.
- The result, `{7, 9, 6}`, represents 796 in array form.
