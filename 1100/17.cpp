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
        vector<vector<int>> g(n, vector<int>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> g[i][j];
            }
        }
        int op = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(g[i][j] != g[n - i - 1][n - j - 1]) {
                    op++;
                }
            }
        }
        op = (op >> 1);
        bool ok = true;
        if(op > k || (n % 2 == 0 && (k - op) % 2 == 1)) {
            ok = false;
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}