#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        long long n, k, x;
        cin >> n >> k >> x;
        vector<long long> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<long long> diff;
        for(int i = 0; i < n - 1; i++) {
            long long d = v[i + 1] - v[i];
            if(d > x) {
                diff.push_back(d);
            }
        }
        long long groups = diff.size() + 1;
        sort(diff.begin(), diff.end());
        for(int i = 0; i < (int)diff.size(); i++) {
            if(diff[i] > x) {
                long long g = (diff[i] + x - 1) / x - 1;
                if(k >= g) {
                    groups -= 1;
                    k -= g;
                }
            }
        }
        cout << groups << "\n";
    }
    return 0;
}
