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
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int g = __gcd(0, abs(a[0] - a[n - 1]));
        for(int i = 1; i < n - 1; i++) {
            g = __gcd(g, abs(a[i] - a[n - i - 1]));
        }
        cout << g << "\n";
    }
    return 0;
}

/*
a[i] % x = a[n - i - 1] % x
(a[i] - a[n - i - 1]) % x = 0   
*/