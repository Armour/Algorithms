//
// Created by Armour on 2017-09-05.
//

#ifndef ALGORITHM_SELECTSORT_H
#define ALGORITHM_SELECTSORT_H

#include <vector>

using namespace std;

class SelectSort {
public:
    SelectSort() = delete;

    explicit SelectSort(const vector<int>& v) {
        num = v;
    }

    ~SelectSort() {
        num.clear();
    }

    SelectSort(const SelectSort&) = default;

    SelectSort(SelectSort&&) noexcept = default;

    SelectSort& operator=(const SelectSort&) = default;

    SelectSort& operator=(SelectSort&&) = default;

    void sort();

    void print();

private:
    vector<int> num;
};


#endif //ALGORITHM_SELECTSORT_H
