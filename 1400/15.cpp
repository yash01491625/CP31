#include <bits/stdc++.h>
using namespace std;


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long n, x, y;
        cin >> n >> x >> y;
        int e = 0, o = 0;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            e += (k % 2 == 0);
            o += (k % 2 == 1);
        }
        bool alice = true;
        if (y & 1) {
            if ((((x + 3) & 1) && o % 2 == 0) || (!((x + 3) & 1) && o % 2 == 1)) alice = false;
        } else {
            if ((((x + 3) & 1) && o % 2 == 1) || (!((x + 3) & 1) && o % 2 == 0)) alice = false;
        }
        cout << (alice ? "Alice\n" : "Bob\n");
    }
    return 0;
}