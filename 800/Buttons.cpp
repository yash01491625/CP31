#include <bits/stdc++.h>
using namespace std;
const long long M = 1000000007;

#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if(c & 1){
        if(b > a){
            cout << "Second\n";
        }
        else{
            cout << "First\n";
        }
    }
    else{
        if(a > b){
            cout << "First\n";
        }
        else{
            cout << "Second\n";
        }
    }
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
