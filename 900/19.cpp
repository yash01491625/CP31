#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long x, n;
        cin >> x >> n;
        long long ans = -1;
        if (x % 2 == 0) {
            if (n % 4 == 0) {
                ans = x;
            } else if ((n - 1) % 4 == 0) {
                ans = x - n;
            } else if ((n + 1) % 4 == 0) {
                ans = x + n + 1;
            } else {
                ans = x + 1;
            }
        } else {
            if (n % 4 == 0) {
                ans = x;
            } else if ((n - 1) % 4 == 0) {
                ans = x + n;
            } else if ((n + 1) % 4 == 0) {
                ans = x - n - 1;
            } else {
                ans = x - 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}