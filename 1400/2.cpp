#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;

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
        int x = n;
        int y = n;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(x > y) {
                if(a[i] <= y) {
                    y = a[i];
                } else if(a[i] <= x) {
                    x = a[i];
                } else {
                    ans += 1;
                    y = a[i];
                }
            } else {
                if(a[i] <= x) {
                    x = a[i];
                } else if(a[i] <= y) {
                    y = a[i];
                } else {
                    ans += 1;
                    x = a[i];
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
