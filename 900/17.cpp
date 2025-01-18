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
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x] += 1;
        }
        int mx = 0;
        for (auto& [x, y] : mp) {
            mx = max(mx, y);
        }
        int ans = 0, e = n - mx;
        for(int i = 0; e != 0; i++) {
            ans += 1;
            e = max(e - (mx << i), 0);
        }
        cout << ans + n - mx << '\n';
    }
    return 0;
}