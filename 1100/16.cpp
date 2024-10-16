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
        sort(a.begin(), a.end());
        if(a[0] != 1) {
            cout << "NO\n";
            continue;
        }
        vector<long long> p(n + 1);
        for(int i = 0; i < n; i++) {
            p[i + 1] = p[i] + a[i];
        }
        bool ok = true;
        for(int i = 1; i < n; i++) {
            if(p[i] < a[i]) {
                ok = false;
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}