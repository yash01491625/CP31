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
        vector<vector<int>> g(n + 1);
        vector<int> c(n + 1, -1);
        int root;
        for (int i = 1; i <= n; i++) {
            int p, cc;
            cin >> p >> cc;
            if (p == -1) {
                root = i;
                continue;
            }
            g[p].push_back(i);
            c[i] = cc;
        }
        queue<int> q;
        q.push(root);
        vector<int> ans;
        while (q.size()) {
            int u = q.front();
            q.pop();
            bool ok = (c[u] == 1);
            for (auto &v : g[u]) {
                ok &= (c[v] == 1);
                q.push(v);
            }   
            if (ok) ans.push_back(u);
        }
        sort(ans.begin(), ans.end());
        int sz = ans.size();
        if (sz == 0) {
            cout << "-1\n";
        } else {
            for (int i = 0; i < sz; i++) {
                cout << ans[i] << " \n"[i == sz - 1];
            }
        }
    }
    return 0;
}