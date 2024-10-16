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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        vector<vector<int>> f(n + 1, vector<int>(26, 0));
        for(int i = 1; i <= n; i++) {
            for(int j = i; j <= n; j += i) {
                f[i][s[j - 1] - 'a'] += 1;
            }
        }
        int ans = -1;
        for(int i = 1; i <= n; i++) {
            int cnt = 0;
            char find;
            for(int j = 0; j < 26; j++) {
                if(f[i][j] != 0) {
                    cnt += 1;
                    find = j + 'a';
                }
            }
            if(cnt == 1 && find == c) {
                ans = i;
                if(ans == 1) {
                    break;
                }
            }
        }
        if(ans == 1) {
            cout << "0\n";
        } else if(ans == -1) {
            cout << "2\n" << n << " " << n - 1 << "\n";
        } else {
            cout << "1\n" << ans << "\n";
        }
    }
    return 0;
}