#include<bits/stdc++.h>
using namespace std;
const int M = 1000000007;

#ifndef ONLINE_JUDGE
#include "../../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        a[i] += (a[i] == 1);
    }
    for(int i = 1; i < n; i++){
        if(a[i] % a[i - 1] == 0){
            a[i] += 1;
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " \n"[i == n - 1];
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