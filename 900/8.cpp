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
        int gt = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '>') {
                cnt += 1;
                gt = max(gt, cnt);
            } else {
                cnt = 0;
            }
        }
        int sm = 0;
        cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '<') {
                cnt += 1;
                sm = max(sm, cnt);
            } else {
                cnt = 0;
            }
        }
        cout << max(gt, sm) + 1 << '\n';
    }
    return 0;
}