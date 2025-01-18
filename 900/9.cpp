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
        vector<int> a(n), p(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            p[a[i]] = i;
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = __gcd(ans, abs(i - p[i + 1]));
        }
        cout << ans << '\n';
    }
    return 0;
}