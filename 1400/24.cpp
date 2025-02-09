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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> dp1(n, 0), dp2(n, 0);
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (a[i] >= 0) dp1[i] = 1;
                else dp2[i] = 1;
            } else if (a[i] >= 0) {
                dp1[i] = dp1[i - 1] + 1;
                dp2[i] = dp2[i - 1];
            } else {
                dp1[i] = dp2[i - 1];
                dp2[i] = dp1[i - 1] + 1;
            }
        }
        long long pos = 0, neg = 0;
        for (int i = 0; i < n; i++) {
            pos += dp1[i];
            neg += dp2[i];
        }
        cout << neg << " " << pos << '\n';
    }
    return 0;
}