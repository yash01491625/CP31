#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long M = 1000000007;

void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll l = 0;
    ll r = 1e9;
    int ans = 0;
    for(int i = 0; i < n; i++){
        l = max(l, abs(a[i] - x));
        r = min(r, abs(a[i] + x));
        if(l > r){
            l = a[i] - x;
            r = a[i] + x;
            ans++;
        }
    }
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