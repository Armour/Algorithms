#include <iostream>
#include <queue>
#include <cstring>

#define MAXN 1000

using namespace std;

int n;
int map[MAXN][MAXN];
int flag[MAXN];
queue<int> Q;

void init() {
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &map[i][j]);
    memset(flag, 0, sizeof(flag));
}

void bfs(int x) {
    int p, i;
    Q.push(x);
    flag[x] = 1;
    while (!Q.empty()) {
        p = Q.front();
        Q.pop();
        printf("Visit: %d\n", p);
        for (i = 0; i < n; i++) {
            if (!flag[i] && map[p][i]) {
                Q.push(i);
                flag[i] = 1;
            }
        }
    }
}

int main() {
    init();
    bfs(0);
}
