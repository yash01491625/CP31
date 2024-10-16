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
        set<char> ss;
        for(int i = 0; i < n; i++) ss.insert(s[i]);
        int k = ss.size();
        vector<bool> f(26, false);
        bool ok = true;
        for(int i = 0; i < n; i++) {
            if(f[s[i] - 'a']) {
                if(i - k < 0) {
                    ok = false;
                } else {
                    for(int j = i; j < n; j++) {
                        if(s[j] != s[j - k]) {
                            ok = false;
                        }
                    }
                }
                break;
            } else {
                f[s[i] - 'a'] = true;
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}