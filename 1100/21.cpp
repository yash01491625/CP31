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
        vector<int> a(n), f(1001, -1);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = n - 1; i >= 0; i--) {
            if(f[a[i]] == -1) f[a[i]] = i + 1;
        }
        int ans = -1;
        for(int i = 1; i <= 1000; i++) {
            if(f[i] != -1) {
                for(int j = 1; j <= 1000; j++) {
                    if(f[j] != -1) {
                        if(__gcd(i, j) == 1) {
                            ans = max(ans, f[i] + f[j]);
                        }
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}