#include <iostream>
#include <vector>
#include <cmath>

#define MAXN 10000000

using namespace std;

vector<int> prime(MAXN, 1);

void sieve() {
    int m = sqrt(MAXN);
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i <= m; i++) {
        if (prime[i]) {
            for (int k = i * i; k <= MAXN; k += i) {
                prime[k] = 0;
            }
        }
    }
}

int GCD(int a, int b) {
    if (b == 0) return a;
    return GCD(b, a % b);
}

int LCM(int a, int b) {
    return a * b / GCD(a, b);
}

int main() {
    sieve();
    GCD(2336, 1314);
    LCM(2336, 1314);
    // Pick's theorem: Area = V_boundary / 2 + V_inside - 1;
    // Euler's theorem: V + F - E = 2
}
