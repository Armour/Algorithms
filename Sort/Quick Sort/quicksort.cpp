#include <iostream>
#include <vector>

using namespace std;

void quicksort(vector<int> &a, int l, int r) {
    int i = l;
    int j = r;
    int mid = a[(i + j) / 2];
    while (i <= j) {
        while (i <= r && a[i] < mid) i++;
        while (j >= l && a[j] > mid) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l < j)
        quicksort(a, l, j);
    if (i < r)
        quicksort(a, i, r);
}


int main() {
    vector<int> V;
    int n, elem;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        V.push_back(elem);
    }
    quicksort(V, 0, V.size() - 1);
    for (int i : V) {
        cout << i << endl;
    }
}
