#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + c) % (2 * b) == 0 || (2 * b - c > 0 && (2 * b - c) % a == 0) || (2 * b - a > 0 && (2 * b - a) % c == 0)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}