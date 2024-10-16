#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;

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
        int q;
        cin >> q;
        vector<int> p(n);
        for(int i = 1; i < n; i++) {
            if(a[i] != a[i - 1]) {
                int j = i;
                while(j < n && a[j] == a[i]) {
                    p[j] = i - 1;
                    j += 1;
                }
                i = j - 1;
            }
        }
        while(q--) {
            int l, r;
            cin >> l >> r;
            l--; r--;
            if(a[l] != a[r]) {
                cout << l + 1 << " " << r + 1;
            } else {
                if(p[r] > l) {
                    cout << p[r] + 1 << " " << r + 1;
                } else {
                    cout << -1 << " " << -1;
                }
            }
            cout << "\n";
        }
        cout << "\n\n";
    }
    return 0;
}