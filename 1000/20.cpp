#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int a, b;
        cin >> a >> b;
        int tot = a;
        int x = 0;
        if((a - 1) % 4 == 0) {
            x = (a - 1);
        } else if((a - 1) % 4 == 1) {
            x = 1;
        } else if((a - 1) % 4 == 2) {
            x = a;
        } else {
            x = 0;
        }
        if(x == b) {
            cout << tot << "\n";
            continue;
        }
        int ans = -1;
        if((x ^ b) == a) {
            ans = tot + 2;
        } else {
            ans = tot + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}       