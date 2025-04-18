# Adjancy Martix
## Overview  
- This program allows users to create and represent a graph in matrix form. The graph can be directed or undirected, weighted or unweighted, and is represented using an adjacency matrix. It helps visualize network connections and weights between nodes. Users can input edges and weights interactively, and the program outputs the adjacency matrix representation.  
---
## Algorithm Steps  
### 1. **Input Initialization**  
   - Prompt the user to enter the number of nodes in the graph (`n`).  
   - Ask whether the graph is directed (`y/n`) and weighted (`y/n`).
### 2. **Matrix Setup**  
   - Initialize an `n x n` matrix filled with a default value (`10000`) to represent no direct connection between nodes.  
   - Set the diagonal elements to `0` because the distance from a node to itself is `0`.  

### 3. **Edge Input**  
   - Repeatedly take user input for edges (`u` and `v`), representing connections between nodes.  
   - If the graph is weighted, prompt for the weight of the edge.  
   - Update the matrix:  
     - For directed graphs: update `matrix[u][v]` with the weight.  
     - For undirected graphs: update both `matrix[u][v]` and `matrix[v][u]` with the weight.  
   - Stop when the user enters `-1 -1` to signal the end of input.  

### 4. **Output the Adjacency Matrix**  
   - Display the matrix in a user-friendly format:  
     - Replace `10000` with `INF` for better readability.  
     - Use tab spacing (`\t`) for proper alignment of the matrix.  

---

## Example Input/Output  

### **Input**  
```
Enter the number of nodes: 3  
Is the graph directed? (y/n): n  
Is the graph weighted? (y/n): y  
Enter the edges of the network in terms of node pairs and -1 -1 to end:  
Edge number 1: 1 2  
Enter the weight of the edge: 5  
Edge number 2: 2 3  
Enter the weight of the edge: 7  
Edge number 3: -1 -1  
```  

### **Output**  
```
************The network in matrix representation is as below************  
0	5	INF  
5	0	7  
INF	7	0  
```  

---

## Conclusion  
This program simplifies graph representation using an adjacency matrix, making it easier to visualize and analyze network connections. It is versatile, handling both directed and undirected graphs, as well as weighted and unweighted edges. The interactive design ensures user-friendly input and accurate representation of the network.
