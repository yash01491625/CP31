#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n);
        long long tot = 0;
        map<int, int> f;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            f[i] = a[i];
            tot += a[i];
        }
        int changed = -1;
        while(q--) {
            long long t, i, x;
            cin >> t;
            if(t == 1) {
                cin >> i >> x;
                i--;
                if(f.count(i)) {
                    tot += (x - f[i]);
                    f[i] = x;
                } else {
                    tot += (x - changed);
                    f[i] = x;
                }
            } else {
                f.clear();
                cin >> x;
                tot = n * x;
                changed = x;
            }
            cout << tot << "\n";
        }
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// #ifndef ONLINE_JUDGE
// #include "algo/debug.h"
// #else
// #define debug(...) 42
// #endif

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int tt = 1;
//     // cin >> tt;
//     while (tt--) {
//         long long n, q;
//         cin >> n >> q;
//         vector<long long> a(n);
//         long long tot = 0;
//         for(int i = 0; i < n; i++) {
//             cin >> a[i];
//             tot += a[i];
//         }
//         vector<int> idx(n, -1);
//         int now = -1;
//         int make = -1;
//         for(int k = 1; k <= q; k++) {
//             long long t, i, x;
//             cin >> t;
//             if(t == 1) {
//                 cin >> i >> x;
//                 i--;
//                 if(idx[i] < make) {
//                     tot -= now;
//                 } else {
//                     tot -= a[i];
//                 }
//                 a[i] = x;
//                 tot += x;
//                 idx[i] = k;
//             } else {
//                 cin >> x;
//                 tot = n * x;
//                 now = x;
//                 make = k;
//             }
//             cout << tot << "\n";
//         }
//     }
//     return 0;
// }