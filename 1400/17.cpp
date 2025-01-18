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
        vector<int> u(n);
        for (int i = 0; i < n; i++) {
            cin >> u[i];
        }
        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        unordered_map<int, vector<long long>> mp;
        for (int i = 0; i < n; i++) {
            mp[u[i]].push_back(s[i]);
        }
        for (auto& [u, v] : mp) {
            sort(v.rbegin(), v.rend());
            for (int j = 0; j < (int) v.size() - 1; j++) {
                v[j + 1] += v[j];
            }
        }
        vector<long long> ans(n + 1);
        for (auto& [u, v] : mp) {
            int nn = v.size();
            for (int k = 1; k <= nn; k++) {
                if (nn % k == 0) {
                    ans[k] += v[nn - 1];
                } else {
                    ans[k] += v[nn - nn % k - 1];
                }
            }
        }     
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " \n"[i == n];
        }
    }
    return 0;
}