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
        long long g1 = 0, g2 = 0;
        for(int i = 0; i < n; i += 2) {
            g1 = __gcd(a[i], g1);
        }
        for(int i = 1; i < n; i += 2) {
            g2 = __gcd(a[i], g2);
        }
        int ans = 0;
        if(g1 == g2) {
            cout << ans << "\n";
        } else {
            bool o1 = true;
            for(int i = 1; i < n; i += 2) {
                if(a[i] % g1 == 0) o1 = false;
            }
            bool o2 = true;
            for(int i = 0; i < n; i += 2) {
                if(a[i] % g2 == 0) o2 = false;
            }
            if(o1) cout << g1 << "\n";
            else if(o2) cout << g2 << "\n";
            else cout << ans << "\n";
        }
    }
    return 0;
}

/*
2 3 6 9
g1 = 2
g2 = 3
2 0 0 0 with g2
0 1 0 1 with g1
max is not always the answer
*/