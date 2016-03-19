#include <iostream>
#include <vector>

using namespace std;

int merge(vector<int> &a, int l, int mid, int r) {
    int count = 0;
    int i = l;
    int j = mid + 1;
    vector<int> tmp;
    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) {
            tmp.push_back(a[i++]);
        } else {
            count += mid + 1 - i;
            tmp.push_back(a[j++]);
        }
    }
    while (i <= mid)
        tmp.push_back(a[i++]);
    while (j <= r)
        tmp.push_back(a[j++]);
    for (int i = l; i <= r; i++) {
        a[i] = tmp[i - l];
    }
    return count;
}

int mergesort(vector<int> &a, int l, int r) {
    int mid = l + (r - l) / 2;
    int count = 0;
    if (l < r) {
        count += mergesort(a, l, mid);
        count += mergesort(a, mid + 1, r);
        count += merge(a, l, mid, r);
    }
    return count;
}

int main() {
    int n, tmp;
    vector<int> V;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        V.push_back(tmp);
    }
    cout << mergesort(V, 0, V.size() - 1) << endl;
    for (int i: V) {
        cout << i << endl;
    }
}
