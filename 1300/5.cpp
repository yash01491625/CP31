#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    const int M = 998244353;
    while (tt--) {
        string s;
        cin >> s;
        int n = s.length();
        char curr = '#';
        int cnt = 0;
        int ans1 = 0, ans2 = 1; 
        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] != curr) {
                if (cnt > 1) {
                    ans1 += (cnt - 1);
                    ans2 = (1LL * ans2 * cnt) % M;
                }
                if (i < n) {
                    curr = s[i];
                    cnt = 1;
                }
            } else {
                cnt += 1;
            }
        }
        int f = 1;
        for (int i = 2; i <= ans1; i++) {
            f = (1LL * f * i) % M;
        }
        cout << ans1 << ' ' << (1LL * ans2 * f) % M << '\n';
    }
    return 0;
}