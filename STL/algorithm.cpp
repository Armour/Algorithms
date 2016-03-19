// Non-modifying
find(v.begin(), v.end(), 1) != v.end()              // Find in vector
find(a, a + ARRAY_SIZE, 1) != a + ARRAY_SIZE        // Find in array
count(v.begin(), v.end(), 11);                      // Returns the number of occurrences of an element in a container

void func(int i) {
    std::cout << ' ' << i;
}
for_each(v.begin(), v.end(), func);                 // Foreach do func

// Modifying
copy(a, a + 7, v.begin());
reverse(v.begin() + 2, v.begin() + 6);              // Reverse vector
reverse(a + 2, a + 6);                              // Reverse array
transform(v.begin(), v.end(), v.begin(), ::tolower());
replace(v.begin(), v.end(), 0, 233);                // Replace all 0 with 233
fill(v.begin(), v.end(), 1);
unique(v.begin(), v.end());                         // Remove adjacent duplicated element, and return the pointer to the last element (then need to do resize or erase)
swap(v1, v2);

// Sort
bool comp(int i, int j) {
    return i > j;
}
sort(v.begin(), v.end(), comp);
sort(a, a + ARRAY_SIZE, greater<int>());
sort(a, a + ARRAY_SIZE, [](int x, int y){return x > y;});

// Min & Max
min(a, b);
max(a, b);
v = *max_element(v.begin(), v.end());               // Returns value of max element in vector
v = min_element(v.begin(), v.end()) - v.begin();    // Returns index of min element in vector
v = *max_element(a, a + ARRAY_SIZE);                // Returns value of max element in array
v = min_element(a, a + ARRAY_SIZE) - a;             // Returns index of min element in array

// Merge                                            // Need to do resize or erase
merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
set_different(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());                   // Only elements in v1
set_symmetric_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());        // Both vectors' elements

// Heap
make_heap(v.begin(), v.end());                      // Build a heap
pop_heap(v.begin(), v.end()); v.pop_back();         // Pop one element from heap
v.push_back(99); push_heap(v.begin(), v.end());     // Push one element to heap
sort_heap(v.begin(), v.end());                      // Sort heap elements

// Permutation
is_permutation(v.begin(), v.end(), v2.begin);

do {
    // solve(..., v);
} while(next_permutation(v.begin(), v.end()));

do {
    // solve(..., v);
} while(prev_permutation(v.begin(), v.end()));
