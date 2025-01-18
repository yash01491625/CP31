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
        vector<int> e[n + 1];
        map<pair<int, int>, int> in;
        for (int i = 0; i < n - 1; i++) {   
            int u, v;
            cin >> u >> v;
            in[{u, v}] = i;
            in[{v, u}] = i;
            e[u].push_back(v);
            e[v].push_back(u);
        }
        vector<int> dp(n + 1);
        dp[1] = 1;
        function<void(int, int)> dfs = [&](int u, int p) {
            for (auto& v : e[u]) {
                if (v != p) {
                    if ((u == 1) || in[{u, v}] > in[{p, u}]) {
                        dp[v] = dp[u];
                    } else {
                        dp[v] = dp[u] + 1;
                    }
                    dfs(v, u);
                }
            }
        };  
        dfs(1, -1);
        int mx = -1;
        for (int i = 1; i <= n; i++) {
            mx = max(mx, dp[i]);
        }
        cout << mx << '\n';
    }
    return 0;
}
