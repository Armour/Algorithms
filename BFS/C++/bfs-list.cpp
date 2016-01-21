#include <iostream>
#include <cstring>
#include <queue>
#include <list>

#define MAXN 1000
#define tr(c, i) for(__typeof__((c).begin()) i = (c).begin(); i != (c).end(); i++)

using namespace std;

int n, m;
int flag[MAXN];
list<int> *adj;
queue<int> Q;

void init() {
    int st, ed;
    cin >> n >> m;
    adj = new list<int>[n];
    for (int i = 0; i < m; i++) {
        cin >> st >> ed;
        adj[st].push_back(ed);
    }
    memset(flag, 0, sizeof(flag));
}

void bfs() {
    Q.push(0);
    flag[0] = 1;
    while (!Q.empty()) {
        int p = Q.front();
        cout << "Visit: " << p << endl;
        Q.pop();
        tr(adj[p], i) {
            if (!flag[*i]) {
                Q.push(*i);
                flag[*i] = 1;
            }
        }
    }
}

int main() {
    init();
    bfs();
}
