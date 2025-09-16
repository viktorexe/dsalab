#include<stdio.h>
int vis[10], q[10], f = -1, r = -1;
void bfs(int g[10][10], int n, int s) {
    for(int i = 0; i < n; i++) vis[i] = 0;
    f = r = -1; q[++r] = s; vis[s] = 1;
    while(f != r) {
        s = q[++f]; printf("%d ", s);
        for(int i = 0; i < n; i++)
            if(g[s][i] && !vis[i]) { q[++r] = i; vis[i] = 1; }
    }
}
void dfs(int g[10][10], int n, int v) {
    printf("%d ", v); vis[v] = 1;
    for(int i = 0; i < n; i++)
        if(g[v][i] && !vis[i]) dfs(g, n, i);
}
int main() {
    int g[10][10], n, s;
    printf("Vertices: "); scanf("%d", &n);
    printf("Matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) scanf("%d", &g[i][j]);
    printf("Start: "); scanf("%d", &s);
    printf("BFS: "); bfs(g, n, s); printf("\n");
    for(int i = 0; i < n; i++) vis[i] = 0;
    printf("DFS: "); dfs(g, n, s); printf("\n");
    return 0;
}

/*
Vertices: 4
Matrix:
0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0
Start: 0
BFS: 0 1 2 3
DFS: 0 1 3 2
*/