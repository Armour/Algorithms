#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {
    array<int, 10> a {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}};
    array<int, 10> b;

    sort(a.begin(), a.end());       // sort the array
    b.fill(5);          // fill whole array with one varibale

    for (auto i: a)
        cout << i << " ";
    cout << endl;

    swap(a, b);         // swap array a and b
    swap_ranges(a.begin() + 2, a.end() - 2, b.begin());         // swap part of the array

    for (int i: a)
        cout << i << " ";
    cout << endl;
}
