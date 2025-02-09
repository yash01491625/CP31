#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector<vector<long long>> dp(n + 1, vector<long long>(2, 0)); 
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                dp[i][0] = a[i - 1];
                dp[i][1] = b[i - 1];
            } else {
                dp[i][0] = max(dp[i][0], max(dp[i - 2][1], dp[i - 1][1]) + a[i - 1]);
                dp[i][1] = max(dp[i][1], max(dp[i - 2][0], dp[i - 1][0]) + b[i - 1]);
            }
        }
        cout << max(dp[n][0], dp[n][1]) << '\n';
    }
    return 0;
}