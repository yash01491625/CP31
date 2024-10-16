#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;

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
        vector<long long> p(n);
        map<long long, long long> f;
        p[0] = a[0];
        f[a[0]] += 1;
        bool ok = false;
        for(int i = 1; i < n; i++) {
            if(i % 2) {
                p[i] = p[i - 1] - a[i];
            } else {
                p[i] = p[i - 1] + a[i];
            }
            f[p[i]] += 1;
            if(f[p[i]] >= 2 || (p[i] == 0)) {
                ok = true;
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}