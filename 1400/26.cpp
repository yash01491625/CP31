#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> f(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            f[x] += 1;
        }
        vector<int> a(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            a[f[i]] += 1;
        }
        int x = 0;
        long long ans = 0;
        for (int i = n; i >= 1; i--) {
            if (a[i]) {
                x += (a[i] - 1);
                ans += i;
            } else if (x > 0) {
                ans += i;
                x -= 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}