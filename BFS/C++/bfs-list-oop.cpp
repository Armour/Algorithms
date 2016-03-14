#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m;
vector<int> flag;

class Graph {
    int v;
    vector<int> *adj;
public:
    Graph(int v = 0);
    void addEdge(int st, int ed);
    void bfs();
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

void Graph::bfs() {
    queue<int> Q;
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
}

int main() {
    int st, ed;
    cin >> n >> m;
    for (int i = 0; i < n; n++) {
        flag.push_back(0);
    }
    Graph G(n);
    for (int i = 0; i < m; i++) {
        cin >> st >> ed;
        G.addEdge(st, ed);
    }
    G.bfs();
}
