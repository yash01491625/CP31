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
        vector<pair<long long, long long>> p(n);
        for(int i = 0; i < n; i++) {
            cin >> p[i].first;
            p[i].second = i + 1;
        }
        sort(p.begin(), p.end(), [&](pair<long long, long long>& x, pair<long long, long long>& y) {
            return x.first + x.second < y.first + y.second;
        });
        long long tot = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            if(tot + p[i].first + p[i].second > k) {
                break;
            }
            tot += p[i].first + p[i].second;
            ans += 1;
        }
        cout << ans << "\n";
    }
    return 0;
}

/*
priority_queue for (i + 1) + a[i] can also be used
*/