#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        vector<pair<long long, long long>> p(n);
        for(int i = 0; i < n; i++) {
            cin >> p[i].first;
            p[i].second = i + 1;
        }
        sort(p.begin(), p.end());
        long long ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(p[i].first * p[j].first >= 2 * n) {
                    break;
                }
                if(p[i].first * p[j].first == p[i].second + p[j].second) {
                    ans += 1;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

/*
since i < j
max(j) = n
max(i) = n - 1;
max(i + j) = 2 * n - 1
max(v[i] * v[j]) = 2 * n - 1
*/