#include<bits/stdc++.h>
using namespace std;
const int M = 1000000007;

#ifndef ONLINE_JUDGE
#include "../../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n), p(n + 1);
    int odd = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] & 1){
            odd++;
        }
    }
    p[0] = 0;
    for(int i = 1; i <= n; i++){
        p[i] = p[i - 1] + (a[i - 1] & 1);
    }
    debug(p);
    while(q--){
        int l, r, k;
        cin >> l >> r >> k;
        int m = odd - (p[r] - p[l - 1]);
        if((k & 1) && ((r - l + 1) & 1)){
            m += (r - l + 1);
        }
        if(m & 1){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";  
        }
    }
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