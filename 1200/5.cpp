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
        vector<int> c(n);
        for(int i = 0; i < n; i++) {
            cin >> c[i];
        }
        vector<int> pos(k, -1);
        vector<int> mx1(k, -1), mx2(k, -1);
        for(int i = 0; i < n; i++) {
            int d = i - pos[c[i] - 1] - 1;
            if(d > mx1[c[i] - 1]) {
                mx2[c[i] - 1] = mx1[c[i] - 1];
                mx1[c[i] - 1] = d;
            } else if(d > mx2[c[i] - 1]) {
                mx2[c[i] - 1] = d;
            }
            pos[c[i] - 1] = i;
        }
        for(int i = 0; i < k; i++) {
            int d = n - pos[i] - 1;
            if(d > mx1[i]) {
                mx2[i] = mx1[i];
                mx1[i] = d;
            } else if(d > mx2[i]) {
                mx2[i] = d;
            }
        }
        int ans = n + 1;
        for(int i = 0; i < k; i++) {
            ans = min(ans, max(mx2[i], mx1[i] / 2));
        }
        cout << ans << "\n";
    }
    return 0;
}