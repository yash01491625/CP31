#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 5;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        int right = -1;
        for(int i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
            right = max(right, a[i].second);
        }
        auto ok = [](int k, vector<pair<int, int>>& a, int n) -> bool {
            int ll = 0, rr = 0;
            for(int i = 0; i < n; i++) {
                int l = a[i].first;
                int r = a[i].second;
                ll = max(ll - k, l);
                rr = min(rr + k, r);
                if(ll > rr) {
                    return false;
                }
            }
            return true;
        };
        int left = a[0].first;
        while(left <= right) {
            int mid = left + ((right - left) >> 1);
            if(ok(mid, a, n)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        cout << left << "\n";
    }
    return 0;
}