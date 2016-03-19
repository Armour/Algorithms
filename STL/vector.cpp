// Constructor
vector<int> v{1,2,3};
vector<int> v = v1;
vector<string> v(3, "What!");
vector<vector<int>> v4(3, vector<int>(3, 100));

// Size
v.size();
v.resize(100, 0);                  // Resize to 100, add new value with 0
v.empty();

// Access
v.front();                          // Reference
v.back();
v.begin();                          // Pointer
v.end();
v[i];

// Modifiers
v.push_back(1);                                 // O(1)
v.pop_back();                                   // O(1)
v.insert(v.begin(), 0);                         // Below are all O(n)
v.insert(v.begin(), v1.begin(), v1.end());      // Insert from vector
v.insert(v.begin(), v1, v1 + 10);               // Insert from array
v.erase(v.begin() + 3);                         // Remove the 4th element
v.erase(v.begin(), v.begin() + 5);              // Remove from 1st to 6th elements
v.assign(100, 0);                               // Assign 100 0's
v.assign(v1.begin(), v1.end());                 // Assign from vector
v.assign(v1, v1 + 10);                          // Assign from array
v.clear();
v.swap(v1);

// Find
find(v.begin(), v.end(), 1) != v.end();         // Find 1 in v

// Function parameter
void update(vector<string> &v) {
    // ...
}

// Don't use the commented line below: (it will create a copy)
// void print(vector<string> v) {
void print(const vector<string> &v) {
    // ...
}
