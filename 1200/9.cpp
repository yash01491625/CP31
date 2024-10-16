#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> f;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            f[a[i]] += 1;
        }
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        int ans = 0;
        for(int i = 0; i < (int)a.size(); i++) {
            int x = f[a[i]];
            int y = f[a[i] - 1];
            if(x > y) {
                ans += (x - y);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}