#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        int cnt = 0, ans = 0;
        for (long long i = 1; i <= 1000; i++) {
            if (n % i == 0) cnt += 1;
            else {
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        ans = max(ans, cnt);
        cout << ans << '\n';
    }
    return 0;
}