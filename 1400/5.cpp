#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<int> b(n), c(n);
        c[0] = 1;
        for(int i = 1; i < n; i++) {
            cin >> c[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(c.begin(), c.end());
        sort(b.begin(), b.end());
        int l = 0, r = n - 1;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(r >= n || l >= n) {
                break;
            }
            while(l < r) {
                int m = (l + (r - l) / 2);
                if(c[i] < b[m]) {
                    r = m;
                } else {
                    l = m + 1;
                }
            }
            if(c[i] < b[r]) {
                ans += 1;
            }
            l = r + 1;
            r = n - 1;
        }
        cout << (n - ans) << "\n";
    }
    return 0;
}