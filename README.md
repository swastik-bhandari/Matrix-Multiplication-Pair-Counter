===============================================================================
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
    T(m) = 2 + ((m-2) * (2m + 2)) / 2, where m ≥1 
    
Total multiplication pairs t(m) is alway less or equal to T(m).

-------------------------------------------------------------------------------

⚙️ USAGE:
You can use the code in the file total_multiplication_pairs.cpp to see the result.

📝 LICENSE:

© 2025 Swastik Bhandari. All rights reserved.

This code and the idea behind it are original and authored by Swastik Bhandari. 
No part of this repository may be used, reproduced, modified, or published — in 
academic papers, commercial products, or derivative works — without explicit 
written permission from the author.

-------------------------------------------------------------------------------

👤 AUTHOR:
Name: Swastik Bhandari
Institution: Kathmandu University, Nepal
Email: swastikbhandari2006@gmail.com

-------------------------------------------------------------------------------

🔗 REPOSITORY (suggested GitHub name):
github.com/swastik-bhandari/Matrix-Multiplication-Pair-Counter

===============================================================================
