#include <iostream>
#include <cstring>
#include <stack>

#define MAXN 1000

using namespace std;

int n;
int map[MAXN][MAXN];
int flag[MAXN];
stack<int> S;

void init() {
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> map[i][j];
    memset(flag, 0, sizeof(flag));
}

void dfs() {
    S.push(0);
    flag[0] = 1;
    while (!S.empty()) {
        int p = S.top();
        cout << "Visit: " << p << endl;
        S.pop();
        for (int i = 0; i < n; i++) {
            if (!flag[i] && map[p][i]) {
                S.push(i);
                flag[i] = 1;
            }
        }
    }
}

int main() {
    init();
    dfs();
}
