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
        int ans = (1 << 32) - 1;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ans &= x;
        }
        cout << ans << '\n';
    }
    return 0;
}