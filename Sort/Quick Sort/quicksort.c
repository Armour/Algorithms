#include <iostream>

using namespace std;

int n;
int a[100];

void qsort(int a[], int l, int r) {
    int i = l, j = r;
    int mid = a[(i + j) / 2];
    while (i <= j) {
        while (a[i] < mid) i++;
        while (a[j] > mid) j--;
        if (i <= j) {
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }
    if (l < j) qsort(a, l, j);
    if (i < r) qsort(a, i, r);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    qsort(a, 0, n-1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
}
