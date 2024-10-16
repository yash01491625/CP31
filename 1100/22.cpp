#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        const int M = 1e9 + 7;
        cout << (((n * (4 * (n * n) % M + 3 * n - 1)) % M * 2022) / 6) % M << "\n";
    }
    return 0;
}