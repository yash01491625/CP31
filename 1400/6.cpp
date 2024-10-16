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
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<vector<int>> p(32, vector<int>(n + 1, 0));
        for(int i = 0; i < 32; i++) {
            for(int j = 1; j <= n; j++) {
                if((1 << i) & a[j - 1]) {
                    p[i][j] += p[i][j - 1] + 1;
                }
            }
        }
        int q;
        cin >> q;
        while(q--) {
            int l, k;
            cin >> l >> k;
            if(a[l - 1] < k) {
                cout << "-1 ";
                continue;
            }
            int ans = l;
            int ll = l, rr = n;
            while(ll <= rr) {
                int r = (ll + (rr - ll) / 2);
                int tot = 0;
                for(int i = 0; i < 32; i++) {
                    if(p[i][r] - p[i][l - 1] == r - l + 1) {
                        tot += (1 << i);
                    }
                }
                if(tot < k) {
                    rr = r - 1;
                } else {
                    ll = r + 1;
                }
            }
            cout << rr << " ";
        }
        cout << "\n";
    }
    return 0;
}