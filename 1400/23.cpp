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
        map<int, vector<int>> mp; 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i] - i].push_back(a[i]);
        }
        long long ans = 0;
        for (auto& [k, v] : mp) {
            long long tot = 0;
            for (int i = 0; i < (int) v.size(); i++) {
                tot += v[i];
            }
            ans = max(ans, tot);
        }
        cout << ans << '\n';
    }
    return 0;
}