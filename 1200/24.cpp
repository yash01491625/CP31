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
        string s;
        cin >> s;
        vector<int> f(2, 0);
        for(int i = 0; i < n; i++) {
            f[s[i] - '0'] += 1;
        }
        cout << (f[0] % 2 == 0 || f[0] == 1 ? "BOB\n" : "ALICE\n");
    }
    return 0;
}