#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 1000

typedef struct node {
    int dest;
    struct node *next;
} node;

int n, m;
node *adj[MAXN];
int flag[MAXN];

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

int dfs(int x) {
    int i;
    node *p;
    printf("Visit: %d\n", x);
    flag[x] = 1;
    p = adj[x];
    while (p != NULL) {
        if (!flag[p->dest])
            dfs(p->dest);
        p = p->next;
    }
}

int main() {
    init();
    dfs(0);
}
