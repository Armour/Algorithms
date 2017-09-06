//
// Created by Armour on 2017-09-05.
//

#include "selectsort.h"

#include <iostream>

void SelectSort::sort() {
    for (int i = 0; i < num.size() - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < num.size(); j++) {
            if (num[j] < num[min_index]) {
                min_index = j;
            }
        }
        swap(num[i], num[min_index]);
    }
}

void SelectSort::print() {
    cout << "Select sort result: ";
    for (int i: num) {
        cout << i << " ";
    }
    cout << endl;
}
