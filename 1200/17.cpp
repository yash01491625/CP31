#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<long long> p(n + 1);
        for(int i = 0; i < n; i++) {
            p[i + 1] = p[i] + a[i];
        }
        long long ans = 0;
        for(int i = n; i >= 1; i--) {
            int l = 1;
            int r = k + 1;
            int days = 0;
            while(l < r) {
                long long m = (l + (r - l) / 2);
                long long cost = p[i] + i * (m - 1);
                if(cost <= k) {
                    days = m;
                    l = m + 1;
                } else {
                    r = m;
                }
            }
            ans += days;
        }
        cout << ans << "\n";
    }
    return 0;
}