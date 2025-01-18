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
        string s;
        cin >> n >> s;
        int color = 1;
        int f = 0, cnt = 1;
        vector<int> ans(n);
        set<int> ss; 
        for (int i = 0; i < n; i++) {
            if(f == 0) {
                if(s[i] == '(') {
                    if(color != 1) {
                        cnt = 2;
                    }
                    color = 1;
                }
                else {
                    if(color != 2) {
                        cnt = 2;
                    }
                    color = 2;
                }
            }
            if(s[i] == ')') {
                f++;
            } else {
                f--;
            }
            ans[i] = color;
            ss.insert(color);
        }
        if(f != 0) {
            cout << -1 << '\n';
            continue;
        }
        if(ss.size() == 1) {
            for (int i = 0; i < n; i++) {
                ans[i] = 1;
            }
            cnt = 1;
        }
        cout << cnt << '\n';
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}