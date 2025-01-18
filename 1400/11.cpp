#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != a[0]) {
                ok = false;
            }
        }
        if(ok) {
            cout << "Yes\n";
            continue;
        }
        for (int i = 0; i < n; i++) {
            if(a[i] % 10 != 5 && a[i] % 10 != 0) {
                while (a[i] % 10 != 2) {
                    a[i] += a[i] % 10;
                }
            }
        }
        set<int> s;
        for (int i = 0; i < n; i++) {
            if(a[i] % 10 == 5) {
                s.insert(a[i] + 5);
            } else if (a[i] % 10 == 0) {
                s.insert(a[i]);
            } else {
                s.insert(a[i] % 20);
            }
        }
        cout << (s.size() == 1 ? "Yes\n" : "No\n");
    }
    return 0;
}