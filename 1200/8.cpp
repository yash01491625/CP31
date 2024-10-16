#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {  
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int l = 0, r = n - 1;
        int x = 1, y = n;
        bool ok = false;
        while(l < r) {
            if((a[l] == x && a[r] == y) || (a[l] == y && a[r] == y)) {
                l += 1;
                r -= 1;
                x += 1;
                y -= 1;
            } else if((a[l] == x) || (a[r] == x)) {
                if(a[l] == x) {
                    l += 1;
                } else if(a[r] == x) {
                    r -= 1;
                }
                x += 1;
            } else if((a[l] == y) || (a[r] == y)) {
                if(a[l] == y) {
                    l += 1;
                } else if(a[r] == y) {
                    r -= 1;
                }
                y -= 1;
            } else {
                ok = true;
                break;
            }
        }
        if(ok) {
            cout << l + 1 << " " << r + 1 << "\n";
        } else { 
            cout << -1 << "\n";
        }
    }
    return 0;
}

