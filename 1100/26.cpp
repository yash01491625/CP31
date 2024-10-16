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
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int l = -1, r = n, ans = 0, cnt = 0;
        long long sl = 0, sr = 0;
        while(l < r) {
            if(sl == sr) {
                ans = max(ans, cnt);
                l++;
                r--;
                if(l < r) {
                    sl += a[l];
                    sr += a[r];
                    cnt += 2;
                }
            } else if(sl > sr) {
                r--;
                sr += a[r];
                cnt++;
            } else if(sl < sr) {
                l++;
                sl += a[l];
                cnt++;
            }
        }
        if(sl == sr) ans = max(ans, cnt);
        cout << ans << "\n";
    }
    return 0;
}