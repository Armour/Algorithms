#include <stdio.h>
#include <string.h>

#define MAXN 1000

int n;
int map[MAXN][MAXN];
int flag[MAXN];

void init() {
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &map[i][j]);
    memset(flag, 0, sizeof(flag));
}

void dfs(int x) {
    int i;
    printf("Visit: %d\n", x);
    flag[x] = 1;
    for (i = 0; i < MAXN; i++) {
        if (!flag[i] && map[x][i])
            dfs(i);
    }
}

int main() {
    init();
    dfs(0);
}
