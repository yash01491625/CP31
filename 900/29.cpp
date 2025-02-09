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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i]--;
            b[a[i]] = i;
        }
        int x, y, z;
        bool ok = false;
        for (int i = n - 1; i >= 0; i--) {
            if (b[i] > 0 && a[b[i] - 1] < i && b[i] < n - 1 && a[b[i] + 1] < i) {
                x = b[i] - 1;
                y = b[i];
                z = b[i] + 1;
                ok = true;
                break;
            }
        }
        if (ok) {
            cout << "Yes\n";
            cout << x + 1 << " " << y + 1 << " " << z + 1 << '\n';
        } else {
            cout << "No\n";
        }
    }
    return 0;
}