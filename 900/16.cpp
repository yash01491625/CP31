#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        string S, T;
        cin >> S >> T;
        int n = S.length(), m = T.length();
        vector<int> f1(26);
        for (int i = 0; i < n; i++) {
            f1[S[i] - 'A'] += 1;
        }
        vector<int> f2(26);
        for (int i = 0; i < m; i++) {
            f2[T[i] - 'A'] += 1;
        }
        bool ok = true;
        for (char c = 0; c < 26; c++) {
            if (f1[c] < f2[c]) {
                ok = false;
                break;
            }
        }
        if (!ok) {
            cout << "No\n";
        } else {
            vector<int> idx[26];
            for (int i = n - 1; i >= 0; i--) {
                idx[S[i] - 'A'].push_back(i);
            }
            vector<int> p(26, 0);
            int curr = -1;
            bool ok = true;
            for (int i = m - 1; i >= 0; i--) {
                int h = idx[T[i] - 'A'][p[T[i] - 'A']];
                if (i == m - 1) {
                    curr = h;
                } else {
                    if (h > curr) {
                        ok = false;
                        break;
                    }
                    curr = h;
                }       
                p[T[i] - 'A'] += 1;
            }
            cout << (ok ? "Yes\n" : "No\n");
        }
    }
    return 0;
}