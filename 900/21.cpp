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
        vector<int> d;
        while (n) {
            d.push_back(n % 10);
            n /= 10;
        }
        int sz = d.size();
        int ans = sz;
        auto get = [&](int x, int y) {
            int z1 = -1;
            int z2 = -1;
            for (int i = 0; i < sz; i++) {
                if (z1 == -1 && d[i] == x) {
                    z1 = i;
                } else if (z1 != -1 && z2 == -1 && d[i] == y) {
                    z2 = i;
                }
            }
            if (z1 != -1 && z2 != -1) return (z2 - z1 - 1 + z1);
            return sz;
        };
        ans = min({ans, get(0, 0), get(5, 2), get(0, 5), get(5, 7)});
        cout << ans << '\n';
    }
    return 0;
}