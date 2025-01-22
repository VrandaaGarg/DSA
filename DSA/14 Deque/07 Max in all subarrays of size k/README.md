# Sliding Window Maximum Using Deque

This README explains the optimized solution for finding the maximum in all subarrays of size `k` using a deque (double-ended queue).

---

<details>
<summary>Problem Statement</summary>

Given an array `arr[] = {10, 8, 5, 12, 15, 7, 6}` and `k = 3`, find the maximum of all subarrays of size `k`.

### Example

**Input:**  
`arr[] = {10, 8, 5, 12, 15, 7, 6}`  
`k = 3`

**Output:**  
`10, 12, 15, 15, 15`

**Explanation:**  
The total number of subarrays will be `n - k + 1` (where `n` is the size of the array). Therefore, there will be 5 elements in the output array for this example.

</details>

---

<details>
<summary>Optimized Solution</summary>

The optimized solution uses a deque (double-ended queue) to efficiently find the maximum in each window.

### Key Concepts

- **Deque:** Either implemented using a doubly linked list or a circular array.
- **Maintaining the Deque:**
  - The size of the deque is maintained as `k` (the window size).
  - The **front** of the deque always stores the maximum of the current window.
- **Index Storage:**
  - The deque stores indices (along with the data if required).
  - When moving to the next window, we pop elements that are no longer part of the current window using their indices.

---

### Example of Operation:

Consider the current window: `{5, 8, 10}`

1. Push `5` into the deque.
2. If the next element (`8`) is greater than `5`, first empty the deque and then push `8`.
3. Similarly, for `10`, empty the deque and push `10`.

**Important Notes:**

- Deletion is done at the **beginning** of the deque.
- Insertion is done at the **end** of the deque.
- The **maximum** is always at the **front** of the deque.

</details>

---

<details>
<summary>Implementation Details</summary>

### Algorithm

1. **Initialization:**

   - Create a deque to store indices of array elements.
   - Initialize an empty result array to store the maximums.

2. **Traversing the Array:**

   - For each element in the array:
     - Remove indices from the **front** of the deque that are no longer part of the current window.
     - Remove indices from the **back** of the deque while the current element is greater than the elements represented by those indices.
     - Add the current index to the **back** of the deque.

3. **Update Result:**

   - After processing each window, the element at the **front** of the deque is the maximum for that window.
   - Add it to the result array.

4. **Repeat Until Done:**
   - Continue until all windows are processed.

---

### Time Complexity

- **O(n):** Each element is pushed and popped from the deque at most once.

---

</details>
