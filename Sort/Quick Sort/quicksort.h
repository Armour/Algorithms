//
// Created by Armour on 2017-09-05.
//

#ifndef ALGORITHM_QUICKSORT_H
#define ALGORITHM_QUICKSORT_H

#include <vector>

using namespace std;

class QuickSort {
public:
    QuickSort() = delete;

    explicit QuickSort(const vector<int>& v) {
        num = v;
    }

    ~QuickSort() {
        num.clear();
    }

    QuickSort(const QuickSort&) = default;

    QuickSort(QuickSort&&) noexcept = default;

    QuickSort& operator=(const QuickSort&) = default;

    QuickSort& operator=(QuickSort&&) = default;

    void sort();

    void print();

private:
    vector<int> num;

    template <class T>
    void sort(T start, T end);
};


#endif //ALGORITHM_QUICKSORT_H
