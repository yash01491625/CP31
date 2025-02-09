#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];
        vector<long long> d(n - 1);
        for (int i = 0; i < n - 1; i++) d[i] = b[i + 1] - b[i];
        sort(d.rbegin(), d.rend());
        long long ans = b[n - 1] - b[0] + 1;
        for (int i = 0; i < k - 1; i++) {
            ans -= (d[i] - 1);
        }
        cout << ans << '\n';
    }
    return 0;
}