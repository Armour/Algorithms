/*********************************************************************
 * set and map are stored in red-black tree, iterate in ascend order *
 *********************************************************************/

#include <iostream>
#include <set>
#include <map>      // most function is the same as set
#include <string>

// Black magic traversal for ANY container!
#define tr(container, it) for (__typeof__(container.begin()) it = container.begin(); it != container.end(); it++)

using namespace std;

set<int> s;
map<string, int> m;
string str;
int n;

int main() {
    cin >> n;

    for(int i = 1; i <= n; i++) {
        s.insert(i);    // Insert n elements
        cin >> str;
        m.insert(make_pair(str, i));
    }

    s.insert(42);   // does nothing, 42 already exists in set

    for(int i = 2; i <= n; i += 2) {
        s.erase(i);     // Erase even values
    }
    m.erase("the string that not exist");

    s.size();   // will be 50
    m.size();   // will be 100

    int r = 0;   // Calculate the sum of elements in set
    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        r += *it;
    }
    for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << it->first << endl;
        cout << it->second << endl;
    }

    // Black magic here!
    tr(s, it) {
        cout << *it << endl;
    }
    tr(m, it) {
        cout << it->first << endl;
        cout << it->second << endl;
    }

    if (s.find(42) != s.end()) {
        // 42 presents in set
    }
    if (m.find(str) != m.end()) {
        // str presents in set
    }
}
