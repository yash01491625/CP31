#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<int> f(n + 1);
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            f[x] += 1;
        }
        auto ok = [&](int k) {
            long long two = 0, can = 0;
            for (int i = 1; i <= n; i++) {
                if (k > f[i]) {
                    two += (k - f[i]) / 2;
                } else {
                    can += f[i] - k;
                }
            }
            return can <= two;
        };  
        int l = 0, r = 2 * m;
        int ans = -1;
        while (l <= r) {
            int m = (l + (r - l) / 2);
            if (ok(m)) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}