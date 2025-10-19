# 🚀 Data Structures & Algorithms in C

<div align="center">

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColorhttps://img.shields.io/badge/License-MIT-green.svg?style=for-thehttps://img.shields.io/badge/Contributions-Welcome-brightgreen.svg?https://img.shields.io/badge/Status-Active-success.svg?style collection of Data Structures and Algorithms implemented in C with detailed explanations and approaches.**

[📚 Documentation](#documentation) -  [🎯 Topics](#topics-covered) -  [💡 Usage](#usage) -  [🤝 Contributing](#contributing)

</div>

***

## 📖 About

This repository contains **clean, well-documented implementations** of fundamental data structures and algorithms in C programming. Each topic includes:

- ✅ **Complete C code** with detailed comments
- ✅ **Multiple approaches** (iterative, recursive, optimized)
- ✅ **Time & Space Complexity** analysis
- ✅ **Visual explanations** and examples
- ✅ **Problem-solving techniques** for interviews

Perfect for **students**, **developers preparing for coding interviews**, and anyone wanting to strengthen their DSA fundamentals in C!

***

## 🎯 Topics Covered

### 📂 Data Structures

<details>
<summary><b>Arrays</b></summary>

- Array Operations (Insert, Delete, Search, Update)
- Sorting Algorithms (Bubble, Selection, Insertion, Merge, Quick, Heap)
- Searching Algorithms (Linear, Binary)
- Array Rotation
- Kadane's Algorithm
- Two Pointer Technique
- Sliding Window Problems

</details>

<details>
<summary><b>Linked Lists</b></summary>

- Singly Linked List
- Doubly Linked List
- Circular Linked List
- Reversal (Iterative & Recursive)
- Cycle Detection (Floyd's Algorithm)
- Merge Two Sorted Lists
- Intersection Point
- Clone with Random Pointers
- LRU Cache Implementation

</details>

<details>
<summary><b>Stacks</b></summary>

- Array-based Stack
- Linked List-based Stack
- Infix to Postfix/Prefix Conversion
- Expression Evaluation
- Balanced Parentheses
- Next Greater Element
- Stock Span Problem

</details>

<details>
<summary><b>Queues</b></summary>

- Simple Queue
- Circular Queue
- Priority Queue
- Deque (Double-Ended Queue)
- Queue using Stacks
- BFS Implementation

</details>

<details>
<summary><b>Trees</b></summary>

- Binary Tree
- Binary Search Tree (BST)
- AVL Tree
- Tree Traversals (Inorder, Preorder, Postorder, Level Order)
- Height & Depth Calculations
- Lowest Common Ancestor (LCA)
- Diameter of Tree
- Mirror/Symmetric Tree

</details>

<details>
<summary><b>Graphs</b></summary>

- Graph Representations (Adjacency Matrix, List)
- BFS & DFS Traversal
- Dijkstra's Shortest Path
- Bellman-Ford Algorithm
- Floyd-Warshall Algorithm
- Kruskal's & Prim's MST
- Topological Sort
- Cycle Detection

</details>

<details>
<summary><b>Hashing</b></summary>

- Hash Table Implementation
- Collision Handling (Chaining, Open Addressing)
- Hash Functions
- Frequency Counting Problems

</details>

<details>
<summary><b>Heaps</b></summary>

- Min Heap & Max Heap
- Heap Sort
- Priority Queue using Heap
- K Largest/Smallest Elements
- Median of Stream

</details>

***

### 🧮 Algorithms

<details>
<summary><b>Sorting Algorithms</b></summary>

| Algorithm         | Best Case | Average Case | Worst Case | Space | Stable |
|-------------------|-----------|--------------|------------|-------|--------|
| Bubble Sort       | O(n)      | O(n²)        | O(n²)      | O(1)  | Yes    |
| Selection Sort    | O(n²)     | O(n²)        | O(n²)      | O(1)  | No     |
| Insertion Sort    | O(n)      | O(n²)        | O(n²)      | O(1)  | Yes    |
| Merge Sort        | O(n log n)| O(n log n)   | O(n log n) | O(n)  | Yes    |
| Quick Sort        | O(n log n)| O(n log n)   | O(n²)      | O(log n)| No   |
| Heap Sort         | O(n log n)| O(n log n)   | O(n log n) | O(1)  | No     |

</details>

<details>
<summary><b>Searching Algorithms</b></summary>

- Linear Search
- Binary Search (Iterative & Recursive)
- Jump Search
- Interpolation Search
- Exponential Search

</details>

<details>
<summary><b>Divide & Conquer</b></summary>

- Merge Sort
- Quick Sort
- Binary Search
- Strassen's Matrix Multiplication
- Closest Pair of Points

</details>

<details>
<summary><b>Greedy Algorithms</b></summary>

- Activity Selection
- Fractional Knapsack
- Huffman Coding
- Job Sequencing
- Minimum Spanning Tree

</details>

<details>
<summary><b>Dynamic Programming</b></summary>

- Fibonacci Series
- 0/1 Knapsack
- Longest Common Subsequence (LCS)
- Longest Increasing Subsequence (LIS)
- Matrix Chain Multiplication
- Edit Distance
- Coin Change Problem
- Rod Cutting

</details>

<details>
<summary><b>Backtracking</b></summary>

- N-Queens Problem
- Sudoku Solver
- Rat in a Maze
- Subset Sum
- Permutations & Combinations

</details>

<details>
<summary><b>Bit Manipulation</b></summary>

- Check Set Bit
- Count Set Bits
- Power of Two
- XOR Operations
- Single Number Problems

</details>

***

## 📁 Repository Structure

```
DSA-in-C/
│
├── 01-Arrays/
│   ├── array_operations.c
│   ├── sorting_algorithms.c
│   ├── searching_algorithms.c
│   └── README.md
│
├── 02-Linked-Lists/
│   ├── singly_linked_list.c
│   ├── doubly_linked_list.c
│   ├── circular_linked_list.c
│   ├── floyd_cycle_detection.c
│   └── README.md
│
├── 03-Stacks/
│   ├── stack_array.c
│   ├── stack_linkedlist.c
│   ├── infix_to_postfix.c
│   └── README.md
│
├── 04-Queues/
│   ├── simple_queue.c
│   ├── circular_queue.c
│   ├── priority_queue.c
│   └── README.md
│
├── 05-Trees/
│   ├── binary_tree.c
│   ├── binary_search_tree.c
│   ├── tree_traversals.c
│   └── README.md
│
├── 06-Graphs/
│   ├── graph_representation.c
│   ├── bfs_dfs.c
│   ├── dijkstra.c
│   └── README.md
│
├── 07-Sorting/
│   ├── bubble_sort.c
│   ├── merge_sort.c
│   ├── quick_sort.c
│   └── README.md
│
├── 08-Dynamic-Programming/
│   ├── fibonacci.c
│   ├── knapsack.c
│   ├── lcs.c
│   └── README.md
│
└── README.md (this file)
```

***

## 💻 Code Example

```c
// Example: Reverse a Linked List (Iterative Approach)

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to reverse the linked list
struct Node* reverseList(struct Node* head) {
    struct Node *prev = NULL, *current = head, *next = NULL;
    
    while (current != NULL) {
        next = current->next;  // Store next node
        current->next = prev;  // Reverse the link
        prev = current;        // Move prev forward
        current = next;        // Move current forward
    }
    
    return prev;  // New head
}

// Time Complexity: O(n)
// Space Complexity: O(1)
```

***

## 🛠️ Prerequisites

- **C Compiler**: GCC, Clang, or any standard C compiler
- **Operating System**: Linux, macOS, or Windows (with MinGW)
- **Text Editor/IDE**: VS Code, Code::Blocks, or any C-compatible editor

***

## 💡 Usage

### Clone the Repository

```bash
git clone https://github.com/yourusername/dsa-in-c.git
cd dsa-in-c
```

### Compile and Run

```bash
# Navigate to specific topic folder
cd 02-Linked-Lists

# Compile the code
gcc singly_linked_list.c -o output

# Run the executable
./output
```

### For Windows Users

```bash
gcc filename.c -o output.exe
output.exe
```

***

## 📊 Complexity Analysis

Each implementation includes detailed **Time and Space Complexity** analysis:

```c
/*
 * Function: binarySearch()
 * 
 * Time Complexity: O(log n)
 * Space Complexity: O(1) - Iterative
 *                  O(log n) - Recursive (call stack)
 * 
 * Best Case: O(1) - element at middle
 * Worst Case: O(log n) - element not present
 */
```

***

## 🎓 Learning Path

**Recommended order for beginners:**

1. **Arrays** → Master basics first
2. **Linked Lists** → Understand pointers and memory
3. **Stacks & Queues** → Linear data structures
4. **Sorting & Searching** → Core algorithms
5. **Trees** → Hierarchical structures
6. **Graphs** → Complex relationships
7. **Dynamic Programming** → Optimization techniques
8. **Advanced Topics** → Heaps, Tries, Segment Trees

***

## 🔥 Key Features

- ✨ **Clean Code**: Well-formatted, readable, and professional
- 📝 **Detailed Comments**: Every line explained for clarity
- 🎯 **Multiple Approaches**: Iterative, recursive, and optimized solutions
- 📈 **Complexity Analysis**: Time and space complexity for each algorithm
- 🧪 **Test Cases**: Example inputs and outputs
- 🎨 **Visual Diagrams**: ASCII art for better understanding
- 🏆 **Interview Ready**: Covers 200+ common DSA interview questions

***

## 🤝 Contributing

Contributions are **highly welcome**! Here's how you can help:

1. **Fork** this repository
2. Create a new branch (`git checkout -b feature/algorithm-name`)
3. Add your implementation with proper documentation
4. Commit your changes (`git commit -m 'Add merge sort implementation'`)
5. Push to the branch (`git push origin feature/algorithm-name`)
6. Open a **Pull Request**

### Contribution Guidelines

- Follow consistent coding style
- Add detailed comments and complexity analysis
- Include test cases and examples
- Update the README if adding new topics

***

## 📚 Resources

- [GeeksforGeeks - DSA](https://www.geeksforgeeks.org/data-structures/)
- [LeetCode Problems](https://leetcode.com/problemset/all/)
- [HackerRank - Data Structures](https://www.hackerrank.com/domains/data-structures)
- [Visualgo - Algorithm Visualizer](https://visualgo.net/)
- [Big-O Cheat Sheet](https://www.bigocheatsheet.com/)

***

## 📝 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

***

## 👨‍💻 Author

**Your Name**

- GitHub: [ITACHI-01-cyber](https://github.com/ITACHI-01-cyber)
- LinkedIn: [Vivek Bhardwaj](https://www.linkedin.com/in/vivek-bhardwaj-468274323)
- Email: your.email@example.com

***

## ⭐ Show Your Support

If you found this repository helpful, please give it a ⭐ star!

**Happy Coding! 🚀**

***

<div align="center">

### 📊 Repository Stats

![GitHub stars](https://img.shields.io/github/stars/yourusername/dsahttps://img.shields.io/github/forks/yourusername/dsahttps://img.shields.io/github/watchers/yourusername/dsa with ❤️ and C**

</div>
