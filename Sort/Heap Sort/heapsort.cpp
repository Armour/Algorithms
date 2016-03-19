#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int a[2000];

bool comp(const int &a, const int &b) {
    return a > b;
}

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> s(a, a + n);
    make_heap(s.begin(), s.end(), comp);
    for (int i = 0; i < n; i++) {
        cout << s.front() << " ";
        pop_heap(s.begin(), s.end(), comp);
        s.pop_back();
    }
    cout << endl;
}
