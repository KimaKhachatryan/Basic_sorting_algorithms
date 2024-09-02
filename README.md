# Basic Sorting Algorithms in C++

This repository contains implementations of various basic sorting algorithms in C++. The primary goal of this project is to demonstrate how different sorting algorithms work and to provide a learning resource for those interested in understanding these fundamental algorithms.

## Table of Contents

- [Overview](#overview)
- [Sorting Algorithms](#sorting-algorithms)
  - [Bubble Sort](#bubble-sort)
  - [Selection Sort](#selection-sort)
  - [Insertion Sort](#insertion-sort)
  - [Merge Sort](#merge-sort)
  - [Quick Sort](#quick-sort)
  - [Heap Sort](#heap-sort)
- [How to Use](#how-to-use)
- [File Structure](#file-structure)
- [Contributing](#contributing)
- [License](#license)

## Overview

Sorting algorithms are fundamental algorithms in computer science used to arrange elements in a particular order. This project implements the following sorting algorithms:

1. **Bubble Sort**
2. **Selection Sort**
3. **Insertion Sort**
4. **Merge Sort**
5. **Quick Sort**
6. **Heap Sort**

Each algorithm is implemented in its respective C++ file, with a main driver program that allows you to test the algorithms with different inputs.

## Sorting Algorithms

### Bubble Sort
Bubble Sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until the list is sorted.

- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
- **Stability:** Stable

### Selection Sort
Selection Sort divides the list into two parts: a sorted part and an unsorted part. It repeatedly selects the smallest (or largest) element from the unsorted part and swaps it with the first unsorted element.

- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
- **Stability:** Unstable

### Insertion Sort
Insertion Sort builds the sorted list one element at a time by repeatedly picking the next element and inserting it into its correct position.

- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
- **Stability:** Stable

### Merge Sort
Merge Sort is a divide-and-conquer algorithm that divides the list into two halves, sorts each half recursively, and then merges the sorted halves.

- **Time Complexity:** O(n log n)
- **Space Complexity:** O(n)
- **Stability:** Stable

### Quick Sort
Quick Sort is a divide-and-conquer algorithm that selects a 'pivot' element from the list and partitions the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.

- **Time Complexity:** O(n log n) on average, O(n^2) in the worst case
- **Space Complexity:** O(log n) on average, O(n) in the worst case
- **Stability:** Unstable

### Heap Sort
Heap Sort builds a binary heap from the list and then repeatedly extracts the maximum element and rebuilds the heap until the list is sorted.

- **Time Complexity:** O(n log n)
- **Space Complexity:** O(1)
- **Stability:** Unstable

## How to Use

1. **Clone the repository:**
   ```bash
   git clone https://github.com/KimaKhachatryan/Basic_sorting_algorithms.git
2. **Compile the code: Use a C++ compiler to compile the source code files. For example, you can use g++:**
   ```bash
   g++ -o sort_algorithms main.cpp bubble_sort.cpp selection_sort.cpp insertion_sort.cpp merge_sort.cpp quick_sort.cpp
3. **Run the program:**
   ```bash
   ./sort_algorithms
