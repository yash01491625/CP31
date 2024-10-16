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
        vector<int> a(k);
        int mn = 1e9;
        int mx = 1;
        for(int i = 0; i < k; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
        }
        sort(a.begin(), a.end());
        vector<int> segs(k);
        for(int i = 0; i < k - 1; i++) {
            segs[i] = a[i + 1] - a[i] - 1;
        }
        segs[k - 1] = mn - 1 + n - mx;
        sort(segs.rbegin(), segs.rend());
        long long day = 0;
        long long ans = 0;
        for(int i = 0; i < k; i++) {
            long long noti = segs[i] - 2 * day;
            if(noti > 0) {
                ans += max(1LL, noti - 1);
            }
            day += 2;
        }
        cout << n - ans << "\n";
    }
    return 0;
}