#include <iostream>
#include <climits>
using namespace std;

#define INF 10000 // A large value representing infinity
#define MAX_NODES 100 // Maximum number of nodes

int graph[MAX_NODES][MAX_NODES];
bool visited[MAX_NODES];
int dist[MAX_NODES];
int parent[MAX_NODES];

int minDistance(int nodes) {
    int min = INF, min_index = -1;
    for (int v = 0; v < nodes; v++) {
        if (!visited[v] && dist[v] < min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void printPath(int j) {
    if (parent[j] == -1)
        return;
    printPath(parent[j]);
    cout << " --> " << (j + 1);
}

void dijkstra(int nodes, int src) {
    for (int i = 0; i < nodes; i++) {
        dist[i] = INF;
        visited[i] = false;
        parent[i] = -1;
    }
    dist[src] = 0;
    for (int count = 0; count < nodes - 1; count++) {
        int u = minDistance(nodes);
        if (u == -1) break;
        visited[u] = true;
        for (int v = 0; v < nodes; v++) {
            if (!visited[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }
    for (int i = 0; i < nodes; i++) {
        if (i != src) {
            cout << "Path from node " << (src + 1) << " to node " << (i + 1) << ": ";
            cout << (src + 1);
            printPath(i);
            cout << "\nShortest distance is " << dist[i] << "\n";
        }
    }
}

int main() {
    int nodes, u, v, w;
    
    cout << "Enter the number of nodes: ";
    cin >> nodes;
    
    for (int i = 0; i < nodes; i++)
        for (int j = 0; j < nodes; j++)
            graph[i][j] = (i == j) ? 0 : INF;
    
    cout << "Enter the edges (node1 node2 weight) and -1 -1 to end:\n";
    while (true) {
        cin >> u >> v;
        if (u == -1 && v == -1) break;
        cin >> w;
        graph[u - 1][v - 1] = w;
        graph[v - 1][u - 1] = w; // Assuming an undirected graph
    }
    
    int src;
    cout << "Enter the source node: ";
    cin >> src;
    dijkstra(nodes, src - 1);
    
    return 0;
}
