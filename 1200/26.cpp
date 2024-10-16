#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
long long add(long long a, long long b) {
    return (a + b) % MOD;
}
long long sub(long long a, long long b) {
    return (a - b + MOD) % MOD;
}
long long mul(long long a, long long b) {
    return (a * b) % MOD;
}
long long pow(long long x, long long y) {
    long long result = 1;
    x = x % MOD;
    while (y) {
        if (y & 1)
            result = (result * x) % MOD;
        y = y >> 1;
        x = (x * x) % MOD;
    }
    return result;
}
long long INV(long long x) {
    return pow(x, MOD - 2);
}
long long divide(long long a, long long b) {
    return mul(a, INV(b));
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long n, k;
        cin >> n >> k;
        cout << (pow(n, k)) << "\n"; 
    }
    return 0;
}

/*
assuming 
a1 = a2 = a3 = a4 = ... and so on has every bit set
we need to make every bit zero this we can do by unsetting every bit of a different number since unsetting same bit of two numbers decreases sum
if there are k bits and n numbers, 1st bit can be unset in n ways, 2nd bit also in n ways ... kth bit in n ways
totol ways = n * n * n ... k times = n^k
*/