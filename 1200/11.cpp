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
        string s;
        cin >> s;
        vector<int> f(n + 1, 0);
        vector<bool> vis(n, false);
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n && s[j] != '1'; j += (i + 1)) {
                if(s[j] == '0' && !vis[j]) {
                    f[i + 1] += 1;
                    vis[j] = true;
                }
            }
        }
        long long ans = 0;
        for(int i = 1; i <= n; i++) {
            ans += i * f[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
