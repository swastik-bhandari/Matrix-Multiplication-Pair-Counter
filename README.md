📦 Project: Matrix Chain Multiplication Pair Count Analyzer
===============================================================================

🧠 DESCRIPTION:
This project introduces a unique approach to analyze how many valid matrix 
multiplications are possible given a chain of matrices with specific dimensions. 
Unlike the traditional Matrix Chain Multiplication (MCM) problem which finds the 
minimum number of scalar multiplications, this focuses on counting the total 
number of valid multiplication *pairs* (Aᵢ × Aⱼ) where matrix dimensions match.

-------------------------------------------------------------------------------

🧪 PROBLEM STATEMENT:
Given an array v of length n, which represents the dimensions of n-1 matrices:
Matrix A₁ has size v[0]×v[1]
Matrix A₂ has size v[1]×v[2]
...
Matrix Aₘ has size v[m-1]×v[m], where m = n-1

The algorithm calculates how many such matrix multiplications are possible 
based on dimension compatibility.

-------------------------------------------------------------------------------

📘 EXAMPLE:
Let:
    v = {2, 3, 2, 4}

Matrix chain:
    A1: 2×3
    A2: 3×2
    A3: 2×4

total ways  = A1A2 , A2A3 ,  A2A1
output : 3 


-------------------------------------------------------------------------------

📐 FORMULA FOR MAXIMUM POSSIBLE MULTIPLICATION PAIRS:
If all matrices are of size k×k ( i.e every elements in the array is same ) , and there are m matrices:
    T(m) = m(m-1), where m ≥1 

When testing the algorithm for matrices of identical dimensions (e.g., all 
𝑘×𝑘), we observed the following number of valid multiplication pairs:

| Number of Matrices (m) | Maximum Valid Multiplication Pairs (T(m)) |
| ---------------------- | ----------------------------------------- |
| 1                      | 0                                         |
| 2                      | 2                                         |
| 3                      | 6                                         |
| 4                      | 12                                        |
| 5                      | 20                                        |
| 6                      | 30                                        |
| 7                      | 42                                        |

Note : valid multiplication pairs t(m) is alway less or equal to Maximum Valid Multiplication Pairs T(m).

-------------------------------------------------------------------------------

📐 The Mathematical Framework
MCM Approach:
Problem: Minimize cost of ((A₁ × A₂) × A₃) × A₄ vs A₁ × (A₂ × (A₃ × A₄)) etc.
Constraint: Only adjacent matrix pairs allowed
Algorithm: Dynamic programming on fixed sequence
Result: Optimal parenthesization of predetermined order
TVMP Approach:
Problem: Minimize cost across ALL valid multiplication sequences
Graph Construction:
  - Nodes: Matrix dimension pairs (r,c)
  - Edges: Valid multiplications with costs
  - Paths: Complete multiplication strategies
Algorithm: Graph optimization (shortest path, etc.)
Result: Global minimum across all valid strategies

-------------------------------------------------------------------------------

The Breakthrough Proof: [5,3,6,3,5]
MCM Analysis:

Search Space: 5 possible parenthesizations of fixed order
Best Found: 174 operations
Limitation: Never considers reordering possibilities

TVMP Analysis:

Search Space: All valid multiplication graphs
Best Found: 153 operations
Advantage: Explores non-adjacent multiplication paths
Improvement: 12.1% better than "optimal" MCM

-------------------------------------------------------------------------------

⚙️ USAGE:
You can use the code in the file total_multiplication_pairs.cpp to see the result.

-------------------------------------------------------------------------------

📝 LICENSE:

Copyright © 2025 Swastik Bhandari. All rights reserved.

This private repository contains code and documentation for a novel Matrix Chain Multiplication algorithm. Access is granted solely for review and collaboration purposes. No use, reproduction, modification, or distribution is permitted without written permission from the author. Contact swastik3223@student.ku.edu.np for inquiries.

-------------------------------------------------------------------------------

👤 AUTHOR:
Name: Swastik Bhandari
Institution: Kathmandu University, Nepal
Email: swastikbhandari2006@gmail.com

-------------------------------------------------------------------------------

🔗 REPOSITORY:
github.com/swastik-bhandari/Matrix-Multiplication-Pair-Counter
