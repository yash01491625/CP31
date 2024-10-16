#include <bits/stdc++.h>
using namespace std;
const long long M = 1000000007;

#ifndef ONLINE_JUDGE
#include "../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(){
    int n;
    cin >> n;
    int cnte = 0;
    int cnto = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        cnte += (x % 2 == 0);
        cnto += (x % 2 == 1);
    }
    if(cnte % 2 == 1 && cnto % 2 == 1){
        cout << "No\n";
    }
    else if(cnto % 2 == 1){
        cout << "No\n";
    }
    else{
        cout << "Yes\n";
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
