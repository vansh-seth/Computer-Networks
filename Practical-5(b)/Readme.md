# Experiment 5 (b): Finding an Optimum Path using Kruskal's Algorithm
## Objective
To find the minimum spanning tree (MST) of a given network using Kruskal's algorithm, ensuring the total cost of leased dedicated lines is minimized.
## Task Overview
- Study Kruskal’s algorithm.
- Implement a C++ program to find the MST of a given network.
- Apply the algorithm to a case study of a company connecting five offices with minimal cost.

## Case Study
A company in New York needs to establish reliable internet and phone connectivity between five offices (A, B, C, D, and E). The phone company charges for each link, and the costs are represented as a graph. The objective is to find the most cost-effective way to connect the offices using Kruskal’s algorithm.

## Kruskal’s Algorithm
Kruskal’s algorithm is a greedy algorithm used to find the minimum spanning tree of a weighted undirected graph. It sorts all edges in non-decreasing order and picks the smallest edge that doesn’t form a cycle.

### Steps:
1. Sort all edges in ascending order based on weight.
2. Initialize each node as an individual set (using Disjoint Set Union - DSU).
3. Pick the smallest edge, check if it forms a cycle using the DSU.
4. If no cycle is formed, include the edge in the MST.
5. Repeat until all nodes are included in the MST.

## Implementation
The program is implemented in C++ and performs the following tasks:
- Reads the number of nodes and edges.
- Uses an adjacency list representation.
- Implements Kruskal’s algorithm to compute the MST.
- Prints the total minimum cost of the MST.

### Compilation and Execution
#### Compile the program:
```sh
g++ kruskal_algorithm.cpp -o kruskal
```
#### Run the program:
```sh
./kruskal
```

## Input Format
The program takes the number of nodes and edges as input, followed by the edges with weights.
Example input:
```
5 7
1 2 4
1 3 2
2 3 5
2 4 10
3 4 3
3 5 8
4 5 6
```

## Output
The program prints the minimum cost of connecting all nodes:
```
Minimum cost is 15
```

## Applications
- Network Design: Finding cost-efficient ways to lay communication lines.
- Circuit Design: Reducing wire costs in circuit connections.
- Transport Networks: Optimizing road and rail connectivity.

## Conclusion
Kruskal’s algorithm efficiently finds the minimum spanning tree by sorting and selecting edges optimally. This experiment demonstrated its application in real-world connectivity problems.
