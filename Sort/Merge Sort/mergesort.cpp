//
// Created by Armour on 2017-09-05.
//

#include "mergesort.h"

#include <iostream>

void MergeSort::sort(){
    sort(num.begin(), num.end());
}

template <class T>
void MergeSort::sort(T start, T end) {
    if (end - start > 1) {
        T mid = (end - start) / 2 + start;
        sort(start, mid);
        sort(mid, end);
        inplace_merge(start, mid, end);
    }
}

void MergeSort::print() {
    cout << "Merge sort result: ";
    for (int i: num) {
        cout << i << " ";
    }
    cout << endl;
}
