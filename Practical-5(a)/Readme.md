# Experiment 5 (a): Finding an Optimum Path using Prim's Algorithm
## Objective
To find the minimum spanning tree (MST) of a given network using Prim's algorithm, ensuring the total cost of leased dedicated lines is minimized.
## Task Overview
- Study Prim’s algorithm.
- Implement a C program to find the MST of a given network.
- Apply the algorithm to a case study of a company connecting five offices with minimal cost.
## Case Study
A company in New York needs to establish reliable internet and phone connectivity between five offices (A, B, C, D, and E). The phone company charges for each link, and the costs are represented as a graph. The objective is to find the most cost-effective way to connect the offices using Prim’s algorithm.
## Prim’s Algorithm
Prim’s algorithm is a greedy algorithm used to find the minimum spanning tree of a weighted undirected graph. It starts from an arbitrary node and grows the MST by adding the minimum-weight edge at each step.
### Steps:
1. Initialize all keys as infinity and mark all nodes as not part of MST.
2. Set the key of the starting node to 0.
3. Pick the node with the minimum key that is not in the MST.
4. Update the keys of adjacent nodes.
5. Repeat until all nodes are included in the MST.

## Implementation
The program is implemented in C and performs the following tasks:
- Defines a 9-node graph.
- Uses an adjacency matrix representation.
- Implements Prim’s algorithm to compute the MST.
- Prints the edges in the MST and the total minimum cost.

### Compilation and Execution
#### Compile the program:
```sh
gcc prims_algorithm.c -o prims
```
#### Run the program:
```sh
./prims
```

## Output
The program prints the edges of the MST along with their weights and the total minimum cost:
```
Edge    Weight
0 - 1   4
1 - 2   8
2 - 3   7
3 - 4   9
...
Total Minimum Cost: XX
```

## Applications
- Network Design: Minimizing cost in laying down communication networks.
- Circuit Design: Optimizing electrical circuit connections.
- Transport Networks: Reducing construction costs in road and rail networks.

## Conclusion
Prim’s algorithm efficiently finds the minimum spanning tree, ensuring the most cost-effective way to connect nodes in a network. This experiment demonstrated its application in real-world connectivity problems.

