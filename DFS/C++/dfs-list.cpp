#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int n, m;
vector<int> flag;
vector<int> *adj;
stack<int> S;

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

void dfs() {
    S.push(0);
    flag[0] = 1;
    while (!S.empty()) {
        int p = S.top();
        cout << "Visit: " << p << endl;
        S.pop();
        for (auto i: adj[p]) {
            if (!flag[i]) {
                S.push(i);
                flag[i] = 1;
            }
        }
    }
    delete []adj;
}

int main() {
    init();
    dfs();
}
