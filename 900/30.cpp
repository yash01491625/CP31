#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        int n = s.length();
        int z = 0;
        for (int i = 0; i < n; i++) {
            z += s[i] == '0';
        }
        int nu = min(z, n - z);
        cout << (nu % 2 ? "DA\n" : "NET\n");
    }
    return 0;
}