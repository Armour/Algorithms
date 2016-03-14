#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
vector<bool> flag;
vector<int> *adj;
queue<int> Q;

void init() {
    int st, ed;
    cin >> n >> m;
    adj = new vector<int>[n];
    for (int i = 0; i < n; i++) {
        flag.push_back(0);
    }
    for (int i = 0; i < m; i++) {
        cin >> st >> ed;
        adj[st].push_back(ed);
    }
}

void bfs() {
    Q.push(0);
    flag[0] = 1;
    while (!Q.empty()) {
        int p = Q.front();
        cout << "Visit: " << p << endl;
        Q.pop();
        for (auto i: adj[p]) {
            if (!flag[i]) {
                Q.push(i);
                flag[i] = 1;
            }
        }
    }
    delete []adj;
}

int main() {
    init();
    bfs();
}
