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
        vector<int> a(n);
        vector<int> f(m);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            f[a[i] % m] += 1;
        }
        int ans = 0;
        for(int i = 0; i < m; i++) {
            if(i == 0 && f[i]) {
                ans += 1;
            } else if(2 * i == m && f[i]) {
                ans += 1;
            } else if(2 * i < m && (f[i] && f[m - i])) {
                int d = abs(f[i] - f[m - i]);
                if(d == 1 || d == 0) {
                    ans += 1;
                } else {
                    ans += 1 + abs(d - 1);
                }
            } else if(f[i] * f[m - i] == 0) {
                ans += f[i];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
