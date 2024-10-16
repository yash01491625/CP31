#include <bits/stdc++.h>
using namespace std;
const long long M = 1000000007;

#ifndef ONLINE_JUDGE
#include "../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    a[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans = max(ans, a[i] - a[i - 1]);
    }
    ans = max(ans, 2 * (k - a[n]));
    cout << ans << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
