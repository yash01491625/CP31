#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << "0\n";
            continue;
        }
        int ans = 0;
        while (n != 1) {
            if (n % 3 == 0 && n % 2 == 0) {
                n /= 6;
                ans += 1;
            } else if (n % 3 == 0) {
                n = (n << 1);
                n /= 6;
                ans += 2;
            } else {
                break;
            }
        }
        cout << (n == 1 ? ans : -1) << '\n';
    }
    return 0;
}