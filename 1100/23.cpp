#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        bool ok = true;
        for(int i = 0; i < n; i++) {
            int rr = l % (i + 1);
            int now = l + (i + 1 - rr) % (i + 1);
            if(now > r)  {
                ok = false;
                break;
            }
            a[i] = now;
        }
        cout << (ok ? "Yes\n" : "No\n");
        if(ok) {
            for(int i = 0; i < n; i++) {
                cout << a[i] << " \n"[i == n - 1];
            }
        }
    }
    return 0;
}