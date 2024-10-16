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
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n);
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int l = 0, r = n - 1;
        while(l <= r) {
            if(a[l] == b[l]) l += 1;
            if(a[r] == b[r]) r -= 1;
            if(a[l] != b[l] && a[r] != b[r]) break;
        }
        if(l > r) {
            int cnt = 0, mx = 0, lm = -1, rm = -1;
            int s = -1;
            for(int i = 0; i < n; i++) {
                if(i == n - 1) {
                    if(cnt > mx) {
                        lm = s;
                        rm = i;
                    }
                } else if(a[i] <= a[i + 1]) {
                    if(s == -1) s = i;
                    cnt += 1;
                } else {
                    if(cnt > mx) {
                        lm = s;
                        rm = i;
                        s = -1;
                        mx = cnt;
                        cnt = 0;
                    }
                }
            }
            cout << lm + 1 << " " << rm + 1 << "\n";
        } else {
            while(l >= 1 && b[l] >= b[l - 1]) l--;
            while(r < n - 1 && b[r] <= b[r + 1]) r++;
            cout << l + 1 << " " << r + 1 << "\n";
        }
    }
    return 0;
}