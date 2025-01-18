#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long tt = 1;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        vector<vector<long long>> dpL(n + 2, vector<long long>(2, 0));
        for (long long i = 1; i <= n; i++) {
            dpL[i][0] = dpL[i - 1][0] + (s[i - 1] == '*' ? 1 : 0);
            dpL[i][1] = dpL[i - 1][1] + (s[i - 1] == '*' ? i : 0);
        }
        vector<vector<long long>> dpR(n + 2, vector<long long>(2, 0));
        for (long long i = n; i >= 1; i--) {
            dpR[i][0] = dpR[i + 1][0] + (s[i - 1] == '*' ? 1 : 0);
            dpR[i][1] = dpR[i + 1][1] + (s[i - 1] == '*' ? i : 0);
        }
        long long ans = LLONG_MAX;
        for (long long i = 1; i <= n; i++) {
            if (s[i - 1] == '*') {
                long long n1 = dpL[i - 1][0];
                long long n2 = dpR[i + 1][0];
                ans = min(ans, i * (n1 - n2) + dpR[i + 1][1] - dpL[i - 1][1] - (n1 * (n1 + 1) / 2 + n2 * (n2 + 1) / 2));
            }
        }
        cout << (ans == LLONG_MAX ? 0 : ans) << '\n';
    }
    return 0;
}