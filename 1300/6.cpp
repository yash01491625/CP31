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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        long long mx = -2 * 1e9;
        for (int i = 0; i < n; i++) {
            mx = max(mx, 1LL * (a[i] - b[i]));
        }
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (1LL * (a[i] - b[i]) == mx) ans.push_back(i + 1);
        }
        int m = ans.size();
        cout << m << '\n';
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " \n"[i == m - 1];
        }
    }
    return 0;
}
