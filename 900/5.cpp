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
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
        }
        if (n % 2 == 0) {
            cout << 2 << '\n';
            for (int i = 0; i < 2; i++) {
                cout << 1 << " " << n << '\n';
            }
        } else {
            cout << 4 << '\n';
            cout << 1 << " " << n << '\n';
            cout << 1 << " " << 2 << '\n';
            cout << 2 << " " << 3 << '\n';
            cout << 2 << " " << n << '\n';
        }
    }
    return 0;
}