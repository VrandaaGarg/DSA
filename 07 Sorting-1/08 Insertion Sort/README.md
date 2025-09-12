# Insertion Sort

## Introduction

Insertion Sort is a simple and efficient **sorting algorithm** that works well for small datasets. It is an **in-place** and **stable** sorting algorithm, meaning it does not require extra space and maintains the relative order of equal elements.

## Time Complexity

- **Worst-case**: **O(n²)** (When the array is reverse sorted)
- **Best-case**: **O(n)** (When the array is already sorted)

## Characteristics

- **In-Place**: No extra space required.
- **Stable**: Maintains the order of equal elements.
- **Efficient for small datasets**: Used in TimSort and IntroSort.

## Practical Usage

- **TimSort** (Python, Java): A hybrid sorting algorithm derived from **Merge Sort** and **Insertion Sort**.
- **IntroSort** (C++ STL `sort` function): A hybrid of **Quick Sort, Heap Sort, and Insertion Sort**.

## Algorithm Idea

Insertion Sort works by **building a sorted portion of the array** step by step:

1. The **first element** is always considered sorted.
2. We pick the **next element** and **insert** it in the correct position in the sorted part of the array.
3. We repeat this process until the entire array is sorted.

## Steps

1. The **first element** is always considered sorted.
2. Start with the **second element** and insert it in the correct position.
