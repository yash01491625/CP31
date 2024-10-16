#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long M = 1000000007;
        
void solve(){
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll ans = 0;
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= q){
            cnt++;
        }
        else{
            if(cnt >= k){
                ans += (cnt - k + 1) * (cnt - k + 2) / 2;
            }
            cnt = 0;
        }
    }
    if(cnt >= k){
        ans += (cnt - k + 1) * (cnt - k + 2) / 2;
    }
    cout << ans << "\n"; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}