#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {  
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long ans = 0;
        map<pair<int, int>, int> f;
        for(int i = 0; i < n; i++) {
            int r1 = a[i] % x;
            int r2 = a[i] % y;
            if(r1 && r2) {
                ans += f[{x - r1, r2}];
            } else if(r1) {
                ans += f[{x - r1, 0}];
            } else if(r2) {
                ans += f[{0, r2}];
            } else {
                ans += f[{0, 0}];
            }
            f[{r1, r2}] += 1;
        }
        cout << ans << "\n";
    }
    return 0;
}

