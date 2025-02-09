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
        int ab = 0, ba = 0;
        for (int i = 0; i < n - 1; i++) {
            ab += (s[i] == 'a' && s[i + 1] == 'b');
            ba += (s[i] == 'b' && s[i + 1] == 'a');
        }
        if (ab == ba) {
            cout << s << '\n';
            continue;
        }
        if (s[0] == 'a') {
            s[0] = 'b'; 
        } else {
            s[n - 1] = 'b';
        }
        cout << s << '\n';
    }
    return 0;
}