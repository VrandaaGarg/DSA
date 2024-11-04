# Sum or Product of Integers

## Problem Statement

You are given a number `N` and a query `Q`.

- If `Q` is `1`, return the sum of all integers from `1` to `N`.
- If `Q` is `2`, return the product of all integers from `1` to `N`. Since the product can be very large, return it modulo \(10^9 + 7\).

### Example

Given `N = 4` and `Q = 1`, the answer is `10` because the sum of all integers from `1` to `4` is \(1 + 2 + 3 + 4 = 10\).

## Input Format

- The first line contains an integer `T`, the number of test cases.
- For each test case:
  - The first line contains two integers `N` and `Q`:
    - `N` is the upper limit of the range `[1, N]`.
    - `Q` is the type of query (1 for sum, 2 for product).

## Output Format

- For each test case, output a single integer:
  - If `Q = 1`, output the sum of integers from `1` to `N`.
  - If `Q = 2`, output the product of integers from `1` to `N` modulo \(10^9 + 7\).

## Constraints

- \(1 <= 'T' <= 10\)
- \(1 <= 'N' <= 10^4\)
- \(1 <= 'Q' <= 2\)

## Time Limit

1 second
