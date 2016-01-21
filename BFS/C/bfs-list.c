#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 1000
#define MAX_QUEUE 100000

typedef struct node {
    int dest;
    struct node *next;
} node;

int n, m;
node *adj[MAXN];
int flag[MAXN];
int Q[MAX_QUEUE];

int add_edge(int st, int ed) {
    node *edge = (node *)malloc(sizeof(node)); 
    edge->dest = ed;
    edge->next = adj[st];
    adj[st] = edge;
}

int init() {
    int i, st, ed;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        adj[i] = NULL;
    }
    for (i = 0; i < m; i++) {
        scanf("%d %d", &st, &ed);
        add_edge(st, ed);
    }
    memset(flag, 0, sizeof(flag));
}

int bfs(int x) {
    node *i;
    int p;
    int f = 0;
    int r = 1;
    Q[r] = x;
    flag[x] = 1;
    while (f < r) {
        p = Q[++f];
        printf("Visit: %d\n", p);
        i = adj[p];
        while (i != NULL) {
            if (!flag[i->dest]) {
                Q[++r] = i->dest;
                flag[i->dest] = 1;
            }
            i = i->next;
        }
    }
}

int main() {
    init();
    bfs(0);
}
