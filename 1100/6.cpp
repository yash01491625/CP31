#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        int mx = 1;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        mx++;
        while(q--) {
            int t;
            cin >> t;
            int x = (1 << t);
            if(x >= mx) {
                continue;
            }
            for(int i = 0; i < n; i++) {
                if(a[i] % x == 0) {
                    a[i] += (x >> 1);
                }
            }
            mx = min(mx, x);
        }
        for(int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}