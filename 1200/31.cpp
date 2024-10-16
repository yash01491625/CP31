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
        long long ans = 0;
        vector<bool> vis(n, false);
        vector<int> b(32);
        for(int bit = 31; bit >= 0; bit--) {
            long long q = 0;
            for(int i = 0; i < n; i++) {
                if(((1 << bit) & a[i]) && !vis[i]) {
                    q += 1;
                    vis[i] = true;
                }
            }
            ans += (q * (q - 1) / 2);
        }
        cout << ans << "\n";
    }
    return 0;
}