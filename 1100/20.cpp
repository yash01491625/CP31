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
        vector<int> a(n);
        long long tot = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            tot += a[i];
        }
        long long s = a[0];
        long long mg = 0;
        for(int i = 1; i < n; i++) {
            mg = max(mg, __gcd(s, tot - s));
            s += a[i];
        }
        cout << mg << "\n";
    }
    return 0;
}