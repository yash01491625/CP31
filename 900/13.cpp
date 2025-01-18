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
        int ans = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool p = false;
        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                if (!p) {
                    p = true;
                    ans += 1;
                }
            } else {
                p = false;
            }
        }
        if (ans <= 1) {
            cout << ans << '\n';
        } else {
            cout << 2 << '\n';
        }
    }
    return 0;
}