#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> D(100000, 999999999);
    set<pair<int, int>> Q;
    D[0] = 0;
    Q.insert(make_pair(0, 0));

    while (!Q.empty()) {
        // fetch the closest to start element from “queue” organized via set
        pair<int, int> top = *Q.begin();
        Q.erase(Q.begin());
        int v = top.second, d = top.first;
        // here we do not need to check whether the distance is perfect
        for (auto it: G[v]) {
            int v2 = it.first, cost = it.second;
            if (D[v2] > D[v] + cost) {
                // this operation can not be done with priority_queue, because it does not support DECREASE_KEY
                if (D[v2] != 999999999) {
                    Q.erase(Q.find(make_pair(D[v2], v2)));
                }
                D[v2] = D[v] + cost;
                Q.insert(make_pair(D[v2], v2));
            }
        }
    }
}
