# Dijkstra's Algorithm in C++

## Introduction
This project implements **Dijkstra's Algorithm** to find the shortest path from a **source node** to all other nodes in a **weighted, directed graph** with non-negative edge weights. The algorithm is implemented in C++ without using vectors, relying instead on arrays.

## Features
- Finds the shortest path from a given source node.
- Uses an **adjacency matrix** for graph representation.
- Uses **arrays** instead of vectors for memory efficiency.
- Displays the **shortest path and its distance**.

## Algorithm Overview
Dijkstra's algorithm maintains a set of vertices whose final shortest-path weights from the source have been determined. It repeatedly selects the vertex with the **minimum shortest-path estimate**, updates its neighbors, and continues until all reachable nodes are processed.

## How to Run
1. **Compile the Code**:
   ```sh
   g++ dijkstra.cpp -o dijkstra
   ```
2. **Run the Executable**:
   ```sh
   ./dijkstra
   ```
3. **Input Format**:
   - Enter the number of nodes.
   - Enter edges as `node1 node2 weight` (enter `-1 -1` to stop input).
   - Enter the source node.

## Example
### **Input:**
```
Enter the number of nodes: 5  
Enter the edges (node1 node2 weight) and -1 -1 to end:  
1 4 1  
2 4 1  
2 3 1  
3 4 1  
4 5 1  
-1 -1  
Enter the source node: 1  
```

### **Output:**
```
Path from node 1 to node 2: 1 --> 4 --> 2  
Shortest distance is 2  

Path from node 1 to node 3: 1 --> 4 --> 3  
Shortest distance is 2  

Path from node 1 to node 4: 1 --> 4  
Shortest distance is 1  

Path from node 1 to node 5: 1 --> 4 --> 5  
Shortest distance is 2  
```

## Complexity Analysis
- **Time Complexity**: `O(V²)` (since we are using an adjacency matrix and finding the minimum node in `O(V)`).
- **Space Complexity**: `O(V²)` (due to the adjacency matrix representation).

## Future Improvements
- Implement a **priority queue (min-heap)** to improve time complexity to `O(V log V + E)`.  
- Support **negative weights** using Bellman-Ford Algorithm.

## Author
Developed by **[Your Name]**.

## License
This project is open-source and free to use under the MIT License.
