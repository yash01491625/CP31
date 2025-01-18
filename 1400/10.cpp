#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long n, m;
        cin >> n >> m;
        long long u;
        u = n;
        int two = 0;
        while (u > 0 && u % 2 == 0) {
            u /= 2;
            two += 1;
        }
        u = n;
        int five = 0;
        while (u > 0 && u % 5 == 0) {
            u /= 5;
            five += 1;
        }
        long long k = 1;
        while (two > five && 5 * k <= m) {
            k *= 5;
            five += 1;

        }
        while (two < five && 2 * k <= m) {
            k *= 2;
            two += 1;
        }
        while (10 * k <= m) {
            k *= 10;
        }
        cout << n * (m / k) * k << '\n';
    }
    return 0;
}