#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, x;
        cin >> n >> x;
        long long mx = 0, mn = 0;
        for (int i = 0; i < n; i++) {
            int y;
            cin >> y;
            mn += y;
            mx += (y + x - 1) / x;
        }
        cout << (mn + x - 1) / x << " " << mx << '\n';
    }
    return 0;
}