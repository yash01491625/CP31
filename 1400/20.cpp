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
        vector<int> a;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            x = x % k;
            if (!mp[x]) {
                a.push_back(x);
            }
            if (x != 0) {
                mp[x] += 1;
            }
        }
        sort(a.begin(), a.end());
        long long x = 0, tot = 0;
        for (int i = 0; i < (int) a.size(); i++) {
            long long up = mp[a[i]];
            if (up > tot) { 
                for (int j = 0; j < up - tot; j++) {
                    x += k - (a[i] + x) % k + 1;
                }
                tot = max(tot, up);
            }
        }
        cout << x << '\n';
    }
    return 0;
}