#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long M = 1000000007;

void solve(){
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    ll mx = s / k;
    ll mn = (s - (n - 1) * (k - 1)) / k;
    if(b > mx || b < mn){
        cout << -1 << "\n";
    } 
    else{
        vector<ll> a(n);
        ll r = k * b;
        if(s / k == b){
            a[0] = s;
        }
        else{
            a[0] = r + (k - 1);
            ll p = s - a[0];
            ll t = p / (k - 1);
            for(int i = 1; i <= t; i++){
                a[i] = k - 1;
            }
            a[t + 1] = p % (k - 1);
        }
        for(int i = 0; i < n; i++){
            cout << a[i] << " \n"[i == n - 1];
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