// GCD
int GCD(int a, int b) {
    if (b == 0) return a;
    return GCD(b, a % b);
}

// LCM
int LCM(int a, int b) {
    return a * b / GCD(a, b);
}

// Sieve for prime number
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

// Modular Exponentiation
long long modular(long long a, long long b, long long p) {
    if (b == 0)
        return 1;
    else if (b == 1)
        return a;
    else if (b % 2 == 0)
        return modular(a * a % p, b / 2, p) % p;
    else
        return modular(a * a % p, b / 2, p) * a % p;
}

// Calculates (a * b) % c taking into account that a * b might overflow
long long mulmod(long long a, long long b, long long c) {
    long long x = 0, y = a % c;
    while (b > 0) {
        if (b % 2 == 1) {
            x = (x + y) % c;
        }
        y = (y * 2) % c;
        b /= 2;
    }
    return x % c;
}

// Miller-Rabin primality test
bool Miller(long long p, int iteration){
    if (p < 2)
        return false;
    if (p != 2 && p % 2 == 0)
        return false;
    long long s = p - 1;
    while (s % 2 == 0) {
        s /= 2;
    }
    for (int i = 0; i < iteration; i++) {
        long long a = rand() % (p - 1) + 1, tmp = s;
        long long mod = modular(a, tmp, p);
        while (tmp != p - 1 && mod != 1 && mod != p - 1) {
            mod = mulmod(mod, mod, p);
            tmp *= 2;
        }
        if (mod != p - 1 && tmp % 2 == 0) {
            return false;
        }
    }
    return true;
}
