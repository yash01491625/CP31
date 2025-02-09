#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> dp(k + 1, vector<int>(n + 1));
        for (int i = 1; i <= n; i++) {
            dp[k][i] = 1;
        }
        const int M = 1e9 + 7;
        for (int i = k - 1; i >= 1; i--) {
            for (int j = 2; j <= n; j++) {
                for (int z = j; z <= n; z += j) {
                    dp[i][j] = (dp[i][j] + dp[i + 1][z]) % M;
                }
            }
        }
        long long ans = 0;
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= n; j++) {
                ans = (ans + dp[i][j]) % M;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}