#include <bits/stdc++.h>
using namespace std;
const long long M = 1000000007;

void solve(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<long long> b(a.begin(), a.end());
    sort(b.begin(), b.end());
    unordered_map<long long, long long> mp;
    for(int i = 0; i < n; i++){
        mp[b[i]] = i;
    }
    vector<long long> pre(n);
    pre[0] = b[0];
    for(int i = 1; i < n; i++){
        pre[i] = pre[i - 1] + b[i];
    }
    vector<long long> dp(n);
    dp[n - 1] = n - 1;
    for(int i = n - 2; i >= 0; i--){
        if(pre[i] >= b[i + 1]){
            dp[i] = dp[i + 1];
        }
        else{
            dp[i] = i;
        }
    }
    for(int i = 0; i < n; i++){
        cout << dp[mp[a[i]]] << " \n"[i == n - 1];
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