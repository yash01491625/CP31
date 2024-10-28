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
        vector<pair<long long, long long>> p(n);
        for(int i = 0; i < n; i++) {
            cin >> p[i].first;
        }
        for(int i = 0; i < n; i++) {
            cin >> p[i].second;
        }
        sort(p.begin(), p.end(), [&](pair<long long, long long>& x, pair<long long, long long>& y) {
            if(x.second == y.second) return (x.first > y.first);
            else return (x.second < y.second);
        });
        long long ans = k;
        long long rem = n - 1;
        for(int i = 0; i < n; i++) {
            ans += min(rem, p[i].first) * min(p[i].second, k);
            rem = max(0LL, rem - p[i].first);
        }
        cout << min(ans, k * n) << "\n";
    }
    return 0;
}