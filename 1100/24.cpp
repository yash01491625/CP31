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
        int f = -1;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x != i) {
                if(f == -1) f = x;
                else f = f & x; 
            }
        }
        cout << f << "\n";
    }
    return 0;
}