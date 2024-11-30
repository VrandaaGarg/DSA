# Key Concepts Imported from Lectures

## 1. Kadane's Algorithm: Maximum Alternating Subarray Length (Lecture 23)

### Explanation:

Kadane's algorithm can be adapted to find the **maximum alternating subarray length** in a given array. Alternating here means a sequence of even and odd elements.

### Steps:

1. Traverse the array starting from the second element (`i = 1`).
2. For each element:
   - **Start a new subarray:**  
     If the current element does not alternate with the previous one (even followed by odd or vice versa), reset the subarray length to 1.
   - **Extend the current subarray:**  
     If the current element alternates with the previous one, increment the length of the subarray.

This approach ensures efficient computation of the maximum alternating subarray length in `O(n)` time.

---

## 2. Modified Kadane's Algorithm for Maximum Circular Subarray Sum (Lecture 24)

### Explanation:

To compute the **maximum circular subarray sum**, Kadane's algorithm is adapted using the following steps:

1. **Normal Kadane's Algorithm:**  
   Find the maximum subarray sum in the array (non-circular).
2. **Total Array Sum:**  
   Compute the total sum of the array elements.

3. **Inverted Kadane's Algorithm:**

   - Invert the array elements by multiplying each by `-1`.
   - Run Kadane's algorithm on the inverted array to find the maximum subarray sum in this inverted array.  
     This is effectively the **minimum subarray sum** in the original array.

4. **Compute Circular Maximum:**  
   Use the formula:  
   `Max Circular Subarray Sum = Total Sum - (-Min Subarray Sum)`  
   This subtracts the smallest subarray sum from the total, yielding the circular maximum.

5. **Edge Case for All-Negative Array:**  
   If the total sum equals the minimum subarray sum (e.g., all numbers are negative), the circular maximum should be the same as the maximum subarray sum.

### Steps Recap:

- Implement a function for standard Kadane's algorithm.
- Use the results of normal Kadane and inverted Kadane to calculate the circular maximum.

This ensures an efficient computation of both non-circular and circular maximum subarray sums.

### Complexity:

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

### Applications:

- Used to solve circular subarray problems in arrays containing both positive and negative numbers.

---

## 3. Moore's Voting Algorithm: Finding Majority Element (Lecture 25)

### Explanation:

Moore's Voting Algorithm is a two-phase algorithm to find the majority element in an array. A **majority element** is defined as an element that appears more than `n/2` times in an array of size `n`.

### Steps:

1. **Phase 1: Candidate Selection**

   - Traverse the array while maintaining a **candidate** and a **count**.
   - If `count` is `0`, set the current element as the `candidate` and reset `count = 1`.
   - If the current element matches the `candidate`, increment `count`.
   - If the current element does not match, decrement `count`.
   - At the end of this phase, the `candidate` is the potential majority element.

2. **Phase 2: Verification**
   - Traverse the array again to count the occurrences of the `candidate`.
   - If the count of the candidate is greater than `n/2`, it is the majority element.
   - Otherwise, no majority element exists.

### Key Points:

- The algorithm may not always return the first occurrence of the majority element but guarantees correctness if one exists.
- If no majority element exists, the algorithm will correctly identify this.

### Complexity:

- **Time Complexity:** `O(n)`
  - Phase 1 and Phase 2 each require a single traversal of the array.
- **Space Complexity:** `O(1)`
  - Only a constant amount of extra space is used.

### Applications:

- Efficiently finding the majority element in arrays for voting systems, data streams, and other computational problems.
