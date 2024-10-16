#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s[n];
        for(int i = 0; i < n; i++) {
            cin >> s[i];
        }
        int ans = 0;
        for(int i = 0; i < n / 2; i++) {
            for(int j = i; j < n - i; j++) {
                int one = 0;
                int zero = 0;
                if(s[i][j] == '0') {
                    zero += 1;
                } else {
                    one += 1;
                }
                if(s[n - i - 1][n - j - 1] == '0') {
                    zero += 1;
                } else {
                    one += 1;
                }
                if(s[j][n - i - 1] == '0') {
                    zero += 1;
                } else {
                    one += 1;
                }
                if(s[n - j - 1][i] == '0') {
                    zero += 1;
                } else {
                    one += 1;
                }
                if(one == 0 || zero == 0) {
                    continue;
                }
                if(one > zero) {
                    ans += zero;
                    if(s[i][j] == '0') {
                        s[i][j] = '1';
                    }
                    if(s[n - i - 1][n - j - 1] == '0') {
                        s[n - i - 1][n - j - 1] = '1';
                    }
                    if(s[j][n - i - 1] == '0') {
                        s[j][n - i - 1] = '1';
                    }
                    if(s[n - j - 1][i] == '0') {
                        s[n - j - 1][i] = '1';
                    }
                } else {
                    ans += one;
                    if(s[i][j] == '1') {
                        s[i][j] = '0';
                    }
                    if(s[n - i - 1][n - j - 1] == '1') {
                        s[n - i - 1][n - j - 1] = '0';
                    }
                    if(s[j][n - i - 1] == '1') {
                        s[j][n - i - 1] = '0';
                    }
                    if(s[n - j - 1][i] == '1') {
                        s[n - j - 1][i] = '0';
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}