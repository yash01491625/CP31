#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        int n;
        string s;
        cin >> n >> s;
        bool f = false;
        for (int i = 1; i < n; i++) {
            if (s[i] < s[i - 1]) {
                cout << "Yes\n";
                cout << i << " " << i + 1 << "\n";
                f = true;
                break;
            }
        }
        if (!f) {
            cout << "No\n";
        }
    }
    return 0;
}