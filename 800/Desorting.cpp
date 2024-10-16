#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1000000007;

#ifndef ONLINE_JUDGE
#include "../../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(){
    long long n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool ok = is_sorted(a.begin(), a.end());
    if(!ok){
        cout << 0 << "\n";
        return;
    }
    long long ans = 1e9 + 7;
    for(int i = 0; i < n - 1; i++){
        long long d = a[i + 1] - a[i];
        if(d & 1){
            ans = min(ans, (d + 1) / 2);
        }
        else{
            ans = min(ans, (d + 2) / 2);
        }
    }
    cout << ans << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}