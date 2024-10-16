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
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long> fd(n + 1);
        vector<long long> bd(n + 1);
        for(int i = 0; i < n; i++) {
            if(a[i] >= i) {
                fd[a[i] - i] += 1;
            } else {
                bd[i - a[i]] += 1;
            }
        }
        long long ans = 0;
        for(int i = 0; i <=  n; i++) {
            ans += fd[i] * (fd[i] - 1) / 2 + bd[i] * (bd[i] - 1) / 2;
        }
        cout << ans << "\n";
    }
    return 0;
}