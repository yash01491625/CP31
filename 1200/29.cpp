#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        if(n % 2 == 0) {
            cout << ((k - 1) % n) + 1 << "\n";
        } else {
            int h = n / 2;
            int n1 = (k - 1) / h; 
            cout << (k + n1 - 1) % n + 1 << "\n";
        }
    }
    return 0;
}