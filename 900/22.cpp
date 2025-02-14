#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        long long o = 0, z = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            o += (x == 1);
            z += (x == 0);
        }
        cout << (1LL << z) * o << '\n';
    }
    return 0;
}