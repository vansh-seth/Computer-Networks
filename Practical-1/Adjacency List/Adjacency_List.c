#include <stdio.h>
#include <stdlib.h>
struct node {
    int vertex;
    int weight;
    struct node* next;
};
struct node* createnode(int, int);
struct Graph {
    int ver;
    struct node** adjLists;
};
struct node* createnode(int v, int w) {
    struct node* newnode = malloc(sizeof(struct node));
    newnode->vertex = v;
    newnode->weight = w;
    newnode->next = NULL;
    return newnode;
}
struct Graph* creategraph(int vertices) {
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->ver = vertices;
    graph->adjLists = malloc(vertices * sizeof(struct node*));
    int i;
    for (i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
    }
    return graph;
}
void addedge(struct Graph* graph, int s, int d, int weight, int isDirected) {
    struct node* newnode = createnode(d, weight);
    newnode->next = graph->adjLists[s];
    graph->adjLists[s] = newnode;
    if (!isDirected) {
        newnode = createnode(s, weight);
        newnode->next = graph->adjLists[d];
        graph->adjLists[d] = newnode;
    }
}
void print(struct Graph* graph) {
    int v;
    for (v = 0; v < graph->ver; v++) {
        struct node* temp = graph->adjLists[v];
        printf("\nVertex %c: ", 'A' + v);
        while (temp) {
            if (temp->weight == -1) {
                printf("%c -> ", 'A' + temp->vertex);
            } else {
                printf("%c(%d) -> ", 'A' + temp->vertex, temp->weight);
            }
            temp = temp->next;
        }
        printf("\n");
    }
}
int main() {
    int n, isDirected, isWeighted;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Is the graph directed (1 for Yes, 0 for No)? ");
    scanf("%d", &isDirected);
    printf("Is the graph weighted (1 for Yes, 0 for No)? ");
    scanf("%d", &isWeighted);
    struct Graph* graph = creategraph(n);
    int edges, src, dest, weight;
    printf("Enter the number of edges: ");
    scanf("%d", &edges);
    int i = 0;
    for (i; i < edges; i++) {
        printf("Enter source and destination (0-%d) for edge %d: ", n - 1, i + 1);
        while (1) {
            scanf("%d %d", &src, &dest);
            if (src < 0 || src >= n || dest < 0 || dest >= n) {
                printf("Invalid input. Please enter source and destination within range (0-%d): ", n - 1);
            } else {
                break;
            }
        }
        if (isWeighted) {
            printf("Enter the weight of the edge: ");
            scanf("%d", &weight);
        } else {
            weight = 1;
        }
        addedge(graph, src, dest, weight, isDirected);
    }
    print(graph);
    return 0;
}
