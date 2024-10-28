#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        long long tot = 0;
        int neg = 0, mn = 100;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
                tot += abs(a[i][j]);
                if(a[i][j] <= 0) neg++;
                mn = min(mn, abs(a[i][j]));
            }
        }
        cout << (neg % 2 == 0 ? tot : tot - 2 * mn) << "\n";
    }
    return 0;
}

/*
if odd negative we can always shift that one negative at end to the smallest absolute element
*/