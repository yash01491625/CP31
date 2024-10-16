#include <bits/stdc++.h>
using namespace std;
const long long M = 1000000007;

#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(i < n - 2 && (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')){
            cout << 2 << "\n";
            return;
        }
        else if(s[i] == '.'){
            cnt++;
        }
    }
    cout << cnt << "\n";
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
