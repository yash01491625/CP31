#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n * k);
        for (int i = 0; i < n * k; i++) {
            cin >> a[i];
        }
        long long tot = 0;
        int g = n - (n + 1) / 2;
        int l = 0, r = n * k - g - 1;
        while (l <= r) {
            tot += a[r];
            l += (n + 1) / 2 - 1;
            r = r - (g + 1);
        }
        cout << tot << '\n';
    }
    return 0;
}