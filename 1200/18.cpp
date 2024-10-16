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
        if(a[n - 1] >= a[n - 2]) {
            if(a[n - 1] >= 0) {
                cout << n - 2 << "\n";
                for(int i = 0; i < n - 2; i++) {
                    cout << i + 1 << " " << n - 1 << " " << n << "\n";
                }
            } else {
                cout << (is_sorted(a.begin(), a.end()) ? "0\n" : "-1\n");
            }
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}