#include<bits/stdc++.h>
using namespace std;
const int M = 1000000007;

#ifndef ONLINE_JUDGE
#include "../../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0;
    int l = 0;
    int r = k - 1;
    for(int i = l; i <= r; i++){
        ans += (s[i] == 'W');
    }
    int p = ans;
    while(r < n){
        l++;
        r++;
        if(r == n){
            break;
        }
        p -= (s[l - 1] == 'W');
        p += (s[r] == 'W');
        ans = min(ans, p);
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