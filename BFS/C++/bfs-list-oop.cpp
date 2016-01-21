#include <iostream>
#include <cstring>
#include <queue>
#include <list>

#define MAXN 1000
#define tr(c, i) for(__typeof__((c).begin()) i = (c).begin(); i != (c).end(); i++)

using namespace std;

int n, m;
int flag[MAXN];

class Graph {
    int v;
    list<int> *adj;
public:
    Graph(int v = 0);
    void addEdge(int st, int ed);
    void bfs();
};

Graph::Graph(int v) {
    this->v = v;
    adj = new list<int>[v];
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
        tr(adj[p], i) {
            if (!flag[*i]) {
                Q.push(*i);
                flag[*i] = 1;
            }
        }
    }
}

int main() {
    int st, ed;
    cin >> n >> m;
    memset(flag, 0, sizeof(flag));
    Graph G(n);
    for (int i = 0; i < m; i++) {
        cin >> st >> ed;
        G.addEdge(st, ed);
    }
    G.bfs();
}
