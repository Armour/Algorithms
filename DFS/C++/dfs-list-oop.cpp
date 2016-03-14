#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int n, m;
vector<int> flag;

class Graph {
    int v;
    vector<int> *adj;
public:
    Graph(int v = 0);
    void addEdge(int st, int ed);
    void dfs();
};

Graph::Graph(int v) {
    this->v = v;
    adj = new vector<int>[v];
}

void Graph::addEdge(int st, int ed) {
    if (st >= v || ed >= v)
        cout << "Length Error" << endl;
    else
        adj[st].push_back(ed);
}

void Graph::dfs() {
    stack<int> S;
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
}

int main() {
    int st, ed;
    cin >> n >> m;
    Graph G(n);
    for (int i = 0; i < n; i++) {
        flag.push_back(0);
    }
    for (int i = 0; i < m; i++) {
        cin >> st >> ed;
        G.addEdge(st, ed);
    }
    G.dfs();
}
