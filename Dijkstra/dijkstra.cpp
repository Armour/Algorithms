#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    // distance from start vertex to each vertex
    vector<int> D(1000000, 999999999);

    // priority_queue with reverse comparison operator, so top() will return the least distance
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

    // initialize the start vertex, suppose it’s zero
    D[0] = 0;
    Q.push(make_pair(0, 0));

    // iterate while queue is not empty
    while (!Q.empty()) {
        // fetch the nearest element
        pair<int, int> top = Q.top();
        Q.pop();
        // v is vertex index, d is the distance
        int v = top.second, d = top.first;
        // we analyze each vertex only once the other occurrences of it on queue (added earlier) will have greater distance
        if (d <= D[v]) {
            // iterate through all outcoming edges from v
            for (auto it : G[v]) {
                int v2 = it.first, cost = it.second;
                if(D[v2] > D[v] + cost) {
                    // update distance if possible
                    D[v2] = D[v] + cost;
                    // add the vertex to queue
                    Q.push(make_pair(D[v2], v2));
                }
            }
        }
    }
}
