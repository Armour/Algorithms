#include <iostream>
#include <algorithm>
#include <vector>

template<class Iter>
void merge_sort(Iter first, Iter last){
    if (last - first > 1) {
        Iter middle = first + (last - first) / 2;
        merge_sort(first, middle); // [first, middle)
        merge_sort(middle, last);  // [middle, last)
        std::inplace_merge(first, middle, last, std::less<int>());       // From small to big
    }
}

int main(){
    std::vector<int> v{8, 2, -2, 0, 11, 11, 1, 7, 3};
    merge_sort(v.begin(), v.end());
    for(auto n : v) {
        std::cout << n << ' ';
    }
    std::cout << std::endl;
    return 0;
}
