#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long a, b;
        cin >> a >> b;
        int ans = -1;
        if (a > b) {
            int cnt = 0;
            while(a > b) {
                if(a % 2 != 0) break;
                a = (a >> 1);
                cnt += 1;
            }   
            if(a == b) {
                ans = cnt / 3 + (cnt % 3) / 2 + ((cnt % 3) % 2);
            }
        } else {
            int cnt = 0;
            while(a < b) {
                a = (a << 1);
                cnt += 1;
            }   
            if(a == b) {
                ans = cnt / 3 + (cnt % 3) / 2 + ((cnt % 3) % 2);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}