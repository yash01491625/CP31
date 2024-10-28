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
        if(n == 2) {
            cout << "0 1\n";
            continue;
        }
        int h = 0;
        for(int i = 31; i >= 0; i--) {
            if((1 << i) & (n - 1)) {
                h = (1 << i);
                break;
            }
        }
        for(int i = 1; i < h; i++) {
            cout << i << " ";
        }
        cout << "0 ";
        for(int i = h; i < n; i++) {
            cout << i << " \n"[i == n - 1];
        }
    }
    return 0;
}