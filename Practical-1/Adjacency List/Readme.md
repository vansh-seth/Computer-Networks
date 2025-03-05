# Graph Implementation in C: Readme
## Theory
The provided code implements a **graph** data structure using **adjacency lists** in C. The graph can be either **directed** or **undirected** and can also have **weighted** or **unweighted** edges. In this implementation:
- A **graph** is represented by a structure (`struct Graph`), which contains:
  - `ver`: The number of vertices (nodes) in the graph.
  - `adjLists`: An array of pointers, each pointing to a linked list of edges (adjacency list).
- An **edge** is represented by a structure (`struct node`), which contains:
  - `vertex`: The destination vertex of the edge.
  - `weight`: The weight of the edge.
  - `next`: A pointer to the next node in the adjacency list.
The program allows the user to:
- Define the number of nodes.
- Choose if the graph is directed or undirected.
- Choose if the graph has weighted or unweighted edges.
- Add edges between nodes (with their respective weights, if applicable).
After setting up the graph, the program displays the adjacency list for each vertex.

## Steps

1. **Input:**
   - The program first prompts the user for the number of nodes (vertices).
   - Then, it asks whether the graph is **directed** or **undirected** and whether the graph is **weighted** or **unweighted**.
   - The user is then prompted for the number of edges they wish to add to the graph.

2. **Edge Addition:**
   - For each edge, the user specifies the source and destination vertices.
   - If the graph is **weighted**, the user also provides the weight of the edge. If not, the weight defaults to `1`.
   - The edge is added to the adjacency list for the source vertex. If the graph is undirected, the reverse edge (from destination to source) is also added.

3. **Graph Display:**
   - The program outputs the adjacency list for each vertex. Each vertex's neighbors and their associated edge weights (if any) are displayed.

4. **Output Format:**
   - For a directed graph, the adjacency list shows the neighbors of each vertex.
   - For an undirected graph, the adjacency list shows the bidirectional edges.

### Example:

If a user inputs the following:
- Number of nodes: 4
- Graph is directed: Yes (1)
- Graph is weighted: Yes (1)
- Number of edges: 3
- Edges: (0, 1), (1, 2), (2, 3)
- Weights: 10, 20, 30

The output would look like:

```
Vertex A: B(10) -> 
Vertex B: C(20) -> 
Vertex C: D(30) -> 
Vertex D: 
```

## Code Breakdown

- **Struct Definitions:**
  - `struct node`: Represents an edge in the graph with a destination vertex, edge weight, and a pointer to the next edge.
  - `struct Graph`: Represents the graph with the number of vertices (`ver`) and an array of adjacency lists (`adjLists`).

- **Functions:**
  - `createnode(int v, int w)`: Creates a new edge node with the given destination vertex and weight.
  - `creategraph(int vertices)`: Initializes the graph with a specified number of vertices and an array of adjacency lists.
  - `addedge(struct Graph* graph, int s, int d, int weight, int isDirected)`: Adds an edge from vertex `s` to vertex `d` with the specified weight. If the graph is undirected, it adds the reverse edge as well.
  - `print(struct Graph* graph)`: Prints the adjacency list for each vertex in the graph.

- **Input Handling:**
  - The program handles input validation to ensure valid source and destination vertices are entered within the specified range.

## Conclusion

This code provides a flexible and simple implementation of a graph using adjacency lists in C. It allows for both **directed** and **undirected** graphs, as well as **weighted** and **unweighted** edges. By dynamically allocating memory for nodes and edges, the program is efficient in handling various graph configurations. The code is also interactive, giving users the ability to customize their graph's structure and visualize it through adjacency list representation.
