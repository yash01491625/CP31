#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<bool> dp(1e6 + 5, true);
    dp[0] = false, dp[1] = false;
    for(int i = 2; i * i <= 1e6; i++) {
        for(int j = i * i; j <= 1e6; j += i) {
            if(dp[j]) {
                dp[j] = false;
            }
        }
    }
    int tt = 1;
    cin >> tt;  
    while (tt--) {
        int d;
        cin >> d;
        bool f = false;
        long long i = d + 1;
        while(i <= 1e6 && !dp[i]) i++;
        long long j = i + d;
        while(j <= 1e6 && !dp[j]) j++;
        cout << min(i * j, i * i * i) << "\n";
    }
    return 0;
}