#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int n;
int a[1000];
int tmp[1000];

int merge(int a[], int tmp[], int l, int m, int r) {
    int i, j, k;
    int count = 0;
    i = k = l;
    j = m;
    while (i <= m - 1 && j <= r) {
        if (a[i] <= a[j]) {
            tmp[k++] = a[i++];
        } else {
            count += m - i;
            tmp[k++] = a[j++];
        }
    }
    while (i <= m - 1) tmp[k++] = a[i++];
    while (j <= r) tmp[k++] = a[j++];
    for (i = l; i <= r; i++)
        a[i] = tmp[i];
    return count;
}

int merge_sort(int a[], int l, int r) {
    int m = (l+r)/2;
    int count = 0;
    if (l < r) {
        count += merge_sort(a, l, m);
        count += merge_sort(a, m + 1, r);
        count += merge(a, tmp, l, m + 1, r);
    }
    return count;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << merge_sort(a, 0, n - 1) << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
