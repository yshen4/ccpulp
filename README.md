# Introduction

This repository is to show how to use dynamic programming (DP) to solve real world probelms.

# Why to use DP?
Dynamic programming is both a mathematical optimization method and a computer programming method. 

The idea of DP is that if we have experiences solving sub-problems before, we can reuse the existing answers to simplify the solutin to the whole problem. Taken Fibonacci series as example, F(n) = F(n-1) + F(n-2). In normal iterative algorithm, we will iterate every i < n, which causes the algorithm to be exponential O(2^n). However, since we have calculated F(i), i = 0, 1, 2, ..., n-1 before n, if we memorize those answers, the calculation becomes simple, and the complexity reduces to linear O(n).

The method simplifies a complicated problem by breaking it down into simpler sub-problems in a recursive manner. While some decision problems cannot be taken apart this way, decisions that span several points in time do often break apart recursively. Likewise, in computer science, if a problem can be solved optimally by breaking it into sub-problems and then recursively finding the optimal solutions to the sub-problems, then it is said to have optimal substructure.

If sub-problems can be nested recursively inside larger problems, so that dynamic programming methods are applicable, then there is a relation between the value of the larger problem and the values of the sub-problems.In the optimization, it is called the Bellman equation.

# Problems
- Fibonacci
- Shortest Paths
- Edit distance
- Text justification
- Longest valid palindrome
- Longest Common Subsequence
- Minimum Partition
- Subset Sum Problem
- Optimal Strategy for a Game
- 0-1 Knapsack Problem
- Boolean Parenthesization Problem
- Matrix Chain Multiplication
- Partition problem

# References
1. [Dynamic Programming wikipedia](https://en.m.wikipedia.org/wiki/Dynamic_programming)

 
