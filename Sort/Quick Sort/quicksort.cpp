//
// Created by Armour on 2017-09-05.
//

#include "quicksort.h"

#include <iostream>

void QuickSort::sort() {
    sort(num.begin(), num.end());
}

template <class T>
void QuickSort::sort(T start, T end) {
    if (start < end) {
        // Find pivot index
        int pivot = *(end - 1); // worst case O(n^2) if every time pivot is the maximum one
        T i = start - 1;
        T j = start;
        while (j != end - 1) {
            if (*j <= pivot) {
                i++;
                swap(*i, *j);
            }
            j++;
        }
        i++;
        swap(*i, *j);
        // Recursively sort
        sort(start, i);
        sort(i + 1, end);
    }
}

void QuickSort::print() {
    cout << "Quick sort result: ";
    for (int i: num) {
        cout << i << " ";
    }
    cout << endl;
}
