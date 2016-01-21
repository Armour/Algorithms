#include <stdio.h>
#include <string.h>

#define MAXN 1000
#define MAX_QUEUE 100000

int n;
int map[MAXN][MAXN];
int flag[MAXN];
int Q[MAX_QUEUE];

void init() {
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &map[i][j]);
    memset(flag, 0, sizeof(flag));
}

void bfs(int x) {
    int i, p;
    int f = 0;
    int r = 1;
    Q[r] = x;
    flag[x] = 1;
    while (f < r) {
        p = Q[++f]; 
        printf("Visit: %d\n", p);
        for (i = 0; i < n; i++) {
            if (!flag[i] && map[p][i]) {
                Q[++r] = i;
                flag[i] = 1;
            }
        }
    }
}

int main() {
    init();
    bfs(0);
}
