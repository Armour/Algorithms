//
// Created by Armour on 2017-09-05.
//

#include "insertsort.h"

#include <iostream>

void InsertSort::sort() {
    for (int i = 1; i < num.size(); i++) {
        int j = i;
        while (j > 0 && num[j] < num[j - 1]) {
            swap(num[j], num[j - 1]);
            j--;
        }
    }
}

void InsertSort::print() {
    cout << "Insert sort result: ";
    for (int i: num) {
        cout << i << " ";
    }
    cout << endl;
}
