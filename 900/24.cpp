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
        long long d = abs(a - b);
        if (d == 0) {
            cout << "0 0\n";
        } else {
            cout << d << " " << min(a % d, d - a % d) << '\n';
        }
    }
    return 0;
}