// Lab 10: Graph Operations - DFS and BFS using Adjacency Matrix
#include<stdio.h>
#define MAX 10

int visited[MAX];
int queue[MAX], front = -1, rear = -1;

void enqueue(int vertex) {
    if(rear == MAX - 1) {
        printf("Queue overflow\n");
    } else {
        if(front == -1) front = 0;
        queue[++rear] = vertex;
    }
}

int dequeue() {
    if(front == -1 || front > rear) {
        return -1;
    } else {
        return queue[front++];
    }
}

void BFS(int graph[MAX][MAX], int vertices, int startVertex) {
    for(int i = 0; i < vertices; i++) {
        visited[i] = 0;
    }
    
    front = rear = -1;
    enqueue(startVertex);
    visited[startVertex] = 1;
    
    printf("BFS Traversal: ");
    while(front <= rear && front != -1) {
        int currentVertex = dequeue();
        printf("%d ", currentVertex);
        
        for(int i = 0; i < vertices; i++) {
            if(graph[currentVertex][i] == 1 && visited[i] == 0) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

void DFS(int graph[MAX][MAX], int vertices, int vertex) {
    visited[vertex] = 1;
    printf("%d ", vertex);
    
    for(int i = 0; i < vertices; i++) {
        if(graph[vertex][i] == 1 && visited[i] == 0) {
            DFS(graph, vertices, i);
        }
    }
}

int main() {
    int graph[MAX][MAX], vertices, startVertex;
    
    printf("Enter number of vertices: ");
    scanf("%d", &vertices);
    
    printf("Enter adjacency matrix:\n");
    for(int i = 0; i < vertices; i++) {
        for(int j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    
    printf("Enter starting vertex: ");
    scanf("%d", &startVertex);
    
    // BFS Traversal
    BFS(graph, vertices, startVertex);
    
    // Reset visited array for DFS
    for(int i = 0; i < vertices; i++) {
        visited[i] = 0;
    }
    
    // DFS Traversal
    printf("DFS Traversal: ");
    DFS(graph, vertices, startVertex);
    printf("\n");
    
    return 0;
}

/*
Sample Output:
Enter number of vertices: 4
Enter adjacency matrix:
0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0
Enter starting vertex: 0
BFS Traversal: 0 1 2 3
DFS Traversal: 0 1 3 2
*/