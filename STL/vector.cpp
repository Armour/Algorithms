#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> v{1,2,3};
vector<int> v1 = v;
vector<int> v2(5, -1);
vector<string> v3(3, "What!");
vector< vector<int> > v4(3, vector<int>(3, 100));

void update(vector<string> &v) {
    v[1] = "What?";
}

// Don't use this: (it will create a copy)
// void print(vector<string> v) {
void print(const vector<string> &v) {
    for (auto x: v) {
        cout << x;
    }
    cout << endl;
}

int main(void) {
    int tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    cout << v.front() << endl;
    cout << v.back() << endl;
    v.insert(v.begin(), 42);    // Insert value 42 after the first

    v1.resize(3);
    if (!v1.empty())
        cout << v1.size() << endl;

    for (int x: v2) {
        cout << x << endl;
    }

    update(v3);
    print(v3);
    cout << *(v3.data() + 1) << endl;

    int ans = 0;
    for (vector< vector<int> >::iterator i = v4.begin(); i != v4.end(); i++) {
        for (vector<int>::iterator j = i->begin(); j != i->end(); j++) {
            ans += *j;
        }
    }
    cout << ans << endl;
}
