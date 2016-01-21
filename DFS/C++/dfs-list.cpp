#include <iostream>
#include <cstring>
#include <stack>
#include <list>

#define MAXN 1000
#define tr(c, i) for(__typeof__((c).begin()) i = (c).begin(); i != (c).end(); i++)

using namespace std;

int n, m;
int flag[MAXN];
list<int> *adj;
stack<int> S;

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

void dfs() {
    S.push(0);
    flag[0] = 1;
    while (!S.empty()) {
        int p = S.top();
        cout << "Visit: " << p << endl;
        S.pop();
        tr(adj[p], i) {
            if (!flag[*i]) {
                S.push(*i);
                flag[*i] = 1;
            }
        }
    }
}

int main() {
    init();
    dfs();
}
