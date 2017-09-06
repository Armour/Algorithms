//
// Created by Armour on 2017-09-05.
//

#include "heapsort.h"

#include <iostream>

void HeapSort::sort() {
    make_heap(num.begin(), num.end());
    sort_heap(num.begin(), num.end());
}

void HeapSort::print() {
    cout << "Heap sort result: ";
    for (int i: num) {
        cout << i << " ";
    }
    cout << endl;
}
