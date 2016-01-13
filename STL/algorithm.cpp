#include <iostream>
#include <algorithm>
#include <vector>

#define ARRAY_SIZE 10

using namespace std;

int a[ARRAY_SIZE] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
vector<int> v(a, a + ARRAY_SIZE);

bool comp(int i, int j) {
    return i > j;
}

int main() {
    reverse(v[2], v[6]);    // the range { 5, 7, 9, 11 } is now { 11, 9, 7, 5 };
    reverse(a + 2, a + 6);  // the range { 5, 7, 9, 11 } is now { 11, 9, 7, 5 };

    if (find(v.begin(), v.end(), 11) != v.end()) {
        // ...
    }
    if (find(a, a + ARRAY_SIZE, 11) != a + ARRAY_SIZE) {
        // ...
    }
    int i = find(v.begin(), v.end(), 11) - v.begin();
    if (i < (int)v.size()) {
        // ...
    }

    int v1 = *max_element(v.begin(), v.end());              // Returns value of max element in vector
    int i1 = min_element(v.begin(), v.end()) - v.begin();   // Returns index of min element in vector
    int v2 = *max_element(a, a + ARRAY_SIZE);               // Returns value of max element in array
    int i2 = min_element(a, a + ARRAY_SIZE) - a;            // Returns index of min element in array

    min(i1, i2);
    max(v1, v2);
    swap(v1, v2);
    count(v.begin(), v.end(), 11);      // returns the number of occurrences of an element in a container or a part of a container

    sort(v.begin(), v.end(), comp);
    sort(a, a + ARRAY_SIZE);

    // first initialize the order of v
    do {
        // solve(..., v);
    } while(next_permutation(v.begin(), v.end()));

    do {
        // solve(..., v);
    } while(prev_permutation(v.begin(), v.end()));
}
