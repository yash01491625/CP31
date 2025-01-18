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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = n - 2; i >= 0; i--) {
            while (a[i] != 0 && a[i] >= a[i + 1]) {
                a[i] = (a[i] >> 1);
                ans += 1;
            };
        }
        for (int i = 0; i < n - 1; i++) {
            if (a[i] >= a[i + 1]) {
                ans = -1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}