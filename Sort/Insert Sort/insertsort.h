//
// Created by Armour on 2017-09-05.
//

#ifndef ALGORITHM_INSERTSORT_H
#define ALGORITHM_INSERTSORT_H

#include <vector>

using namespace std;

class InsertSort {
public:
    InsertSort() = delete;

    explicit InsertSort(const vector<int>& v) {
        num = v;
    }

    ~InsertSort() {
        num.clear();
    }

    InsertSort(const InsertSort&) = default;

    InsertSort(InsertSort&&) noexcept = default;

    InsertSort& operator=(const InsertSort&) = default;

    InsertSort& operator=(InsertSort&&) = default;

    void sort();

    void print();

private:
    vector<int> num;
};


#endif //ALGORITHM_INSERTSORT_H
