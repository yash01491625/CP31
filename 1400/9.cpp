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
        vector<int> a(n + 1, 0);
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            if (x < y) swap(x, y);
            a[x] = max(a[x], y);
        }
        int last = 0;
        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            if (last <= a[i]) {
                ans += (i - a[i]);
                if (a[i]) {
                    last = a[i];
                }
            } else if (last > a[i]) {
                ans += (i - last);
            } else {
                ans += (i - last);
                if (a[i]) {
                    last = a[i];
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}