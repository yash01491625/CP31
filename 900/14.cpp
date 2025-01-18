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
        if ((n & 1) || n < 4) {
            cout << -1 << '\n';
            continue;
        }
        if (n % 4 == 0 && n % 6 == 0) {
            cout << n / 6 << ' ' << n / 4 << '\n';
        } else if (n % 4 == 0) {
            cout << max(0LL, (n - 4)) / 6  + ((n - 4) % 6 + 4) / 4 << ' ' << n / 4 << '\n'; 
        } else if (n % 6 == 0) {
            cout << n / 6 << ' ' << max(0LL, (n - 6)) / 4 + ((n - 6) % 4 + 6) / 6 << '\n'; 
        } else {
            cout << max(0LL, (n - 4)) / 6  + ((n - 4) % 6 + 4) / 4 << ' ' << max(0LL, (n - 6)) / 4 + ((n - 6) % 4 + 6) / 6 << '\n';
        }
    }
    return 0;
}   