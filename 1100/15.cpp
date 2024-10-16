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
        long long n = s.length();
        long long mx = 0, cnt = 0;
        int i = 0;
        while(i < n && s[i] == '1') i++;
        int j = n - 1;
        while(j >= 0 && s[j] == '1') j--;
        if(i == n) {
            cout << n * n << "\n";
            continue;
        }
        mx = max(mx, (long long)(i + (n - j - 1)));
        long long ans = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                cnt += 1;
            } else {
                mx = max(mx, cnt);
                cnt = 0;
            }
        }
        mx = max(mx, cnt);
        ans = max(ans, ((mx + 1) / 2) * ((mx + 2) / 2));
        cout << ans << "\n";
    }
    return 0;
}