# Selection Sort

## Time and Space Complexity

- **Time Complexity**: **O(n²)** (Always, regardless of input)
- **Space Complexity**: **O(1)** (In-place sorting)

## Characteristics

- **Fewer memory writes** compared to Quick Sort, Merge Sort, and Insertion Sort.
- **Cycle Sort** is more optimal in terms of memory writes.
- **Basic idea behind Heap Sort**.
- **Not stable** (Changes the order of equal elements).

## When is it Used?

Selection Sort is useful in scenarios where **memory writes are costly**:

1. **When memory writes are expensive** (e.g., Flash memory or EEPROM storage).
2. **When we need to minimize memory writes**.

## Algorithm Idea

The Selection Sort algorithm follows a **simple approach**:

1. Find the **minimum element** in the array and **swap it with the first element**.
2. Find the **minimum element** in the remaining array and **swap it with the second element**.
3. Repeat this process until the array is **fully sorted**.
