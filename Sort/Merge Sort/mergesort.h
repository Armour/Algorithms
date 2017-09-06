//
// Created by Armour on 2017-09-05.
//

#ifndef ALGORITHM_MERGESORT_H
#define ALGORITHM_MERGESORT_H

#include <vector>

using namespace std;

class MergeSort {
public:
    MergeSort() = delete;

    explicit MergeSort(const vector<int>& v) {
        num = v;
    }

    ~MergeSort() {
        num.clear();
    }

    MergeSort(const MergeSort&) = default;

    MergeSort(MergeSort&&) noexcept = default;

    MergeSort& operator=(const MergeSort&) = default;

    MergeSort& operator=(MergeSort&&) = default;

    void sort();

    void print();

private:
    vector<int> num;

    template <class T>
    void sort(T start, T end);
};


#endif //ALGORITHM_MERGESORT_H
