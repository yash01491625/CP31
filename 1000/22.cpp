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
        if(a == b) {
            cout << "2\n";
            continue;
        } else if(a < b) {
            cout << "1\n";
            continue;
        }
        int ans = 1e9;
        for(int i = (b == 1); i <= 100; i++) {
            int op = i;
            int x = a;
            int y = b + i;
            while(x) {
                x /= y;
                op++;
            }
            ans = min(ans, op);
        }
        cout << ans << "\n";
    }
    return 0;
}