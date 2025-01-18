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
        int a[n];
        int mn = 1e9 + 1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
        }
        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += (a[i] == mn);
        }
        bool ok = true;
        for (int i = 0; i < n; i++) {
            for (int bit = 31; bit >= 0; bit--) {
                int b = (1 << bit);
                if ((b & a[i]) != (b & mn)) {
                    if (b & mn) ok = false;
                }
            }
        }
        if (!ok || cnt < 2) {
            cout << "0\n";
        } else {
            const int M = 1e9 + 7;
            long long f = 1;
            for (int i = 2; i <= n - 2; i++) {
                f = ((1LL * f * i) % M);
            }
            cout << (1LL * (cnt * (cnt - 1)) % M * f) % M << '\n';
        }
    }
    return 0;
}

/*
cnt * (cnt - 1) = No of ways two mins cam be placed at two ends
(n - 2)P(n - 2) = No of ways in which remaining (n - 2) elements can be arranged 
*/