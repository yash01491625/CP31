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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        long long ans = 0, cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (i == n || (a[i] >= (a[i + 1] << 1))) {
                if (cnt >= k) {
                    ans += (cnt - k + 1);
                }
                cnt = 0;
            } else if (a[i] < (a[i + 1] << 1)) {
                cnt += 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}