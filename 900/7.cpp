#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << 0 << '\n';
            continue;
        }
        sort(a.begin(), a.end());
        int ans = 0, curr = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] <= k) {
                curr += 1;
                ans = max(ans, curr);
            } else {
                curr = 1;
            }
        }
        cout << (ans == 0 ? n - 1 : n - ans) << '\n';
    }
    return 0;
}