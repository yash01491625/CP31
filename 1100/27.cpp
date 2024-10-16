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
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int l = 0, r = 1;
        bool ok = false;
        while(l <= r && r < n) {
            int d = a[r] - a[l];
            if(d == k && l != r) {
                ok = true;
                break;
            } else if(d < k) {
                r++;
            } else {
                l++;
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}

/*
a1 a2 a3
a2 - a1 a3 - a1
a3 - a1 - (a2 - a1)
a3 - a2 or a2 - a3
basically difference between any two elements = k
*/ 
