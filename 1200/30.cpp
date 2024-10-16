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
        unordered_map<int, int> f;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            f[a[i]] += 1;
        }
        int mn = n;
        int r = -1;
        for(auto& x : f) {
            if(mn > x.second) {
                mn = x.second;
                r = x.first;
            }
        }
        if(mn == n) {
            cout << "NO\n";
            continue;
        }
        int idx1 = -1;
        int idx2 = -1;
        for(int i = 0; i < n; i++) {
            if(r == a[i]) {
                idx1 = i;
            } else {
                idx2 = i;
            }
        }
        cout << "YES\n";
        int n1 = 0;
        for(int i = 0; i < n; i++) {
            if(r != a[i]) {
                cout << i + 1 << " " << idx1 + 1 << "\n";
            }
        }   
        if(n1 != n - 1) {
            for(int i = 0; i < n; i++) {
                if(r == a[i] && i != idx1) {
                    cout << i + 1 << " " << idx2 + 1 << "\n";
                }
            }
        }
    }
    return 0;
}