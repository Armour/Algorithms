#include <vector>

using namespace std;

class HashEntry{
private:
    int val;
    int key;
public:
    HashEntry(int val, int key) {
        this->val = val;
        this->key = key;
    }

    int getVal(void) {
        return val;
    }

    int getKey(void) {
        return key;
    }
};

class HashTable {
private:
    int size;
    vector<HashEntry> *table;
public:
    HashTable(int size = 0) {
        this->size = size;
        table = new vector<HashEntry>[size];
    }

    ~HashTable() {
        delete []table;
    }

    void insert(int key, int val) {
        int p = key % size;
        while (HashTable[p][]);
        new HashEntry(key, val);
    }

    int find(int val) {
    }
};
