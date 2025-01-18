#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        const int N = 1e5 + 1;
        vector<vector<int>> x(N), y(N);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int e;
                cin >> e;
                x[e].push_back(i + 1);
                y[e].push_back(j + 1);
            }
        }
        long long sum = 0;
        for (int i = 1; i <= N; i++) {
            int xz = x[i].size();
            int yz = y[i].size();
            if (xz) {
                sort(x[i].begin(), x[i].end());
                for (int j = 0; j < xz; j++) {
                    sum += 1LL * j * x[i][j] - 1LL * (xz - j - 1) * x[i][j];
                }
            }
            if (yz) {
                sort(y[i].begin(), y[i].end());
                for (int j = 0; j < yz; j++) {
                    sum += 1LL * j * y[i][j] - 1LL * (yz - j - 1) * y[i][j];
                }
            }
        }
        cout << sum << '\n';
    }
    return 0;
}