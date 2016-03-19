/*********************************************************************
 * set and map are stored in red-black tree, iterated in ascend order *
 *********************************************************************/

struct comp {
    bool operator() (const int &lhs, const int &rhs) const {
        return lhs < rhs;
    }
};

// Constructor
set<string> s(v1.begin(), v1.end());
set<int, comp> s(s1);

// Size
s.size();
s.empty();

// Access
s.begin();
s.end();

// Modifiers
s.insert("2333");
s.erase(1, 10);                                 // Remove 10 elements from 2nd
s.erase(s.begin() + 3);                         // Remove the 4th element
s.erase(s.begin(), s.begin() + 5);              // Remove from 1st to 6th elements
s.clear();
s.swap(s1);

// Find
s.find("2333") != string::npos;                 // Below are all O(log n)
s.lower_bound();                                // An iterator to the the first element in the container which is not considered to go before val
s.upper_bound();                                // An iterator to the the first element in the container which is considered to go after val

// Map are pretty like set
