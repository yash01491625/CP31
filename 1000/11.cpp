#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long M = 1000000007;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    ll l = 0, r = n - 1, sum = 0, mx = -1, cnt = 0;
    bool ok = false;
    while(l <= r){
        if(sum <= k){
            if(!ok){
                sum += v[l];
                mx = v[l];
                l++;
                ok = true;
            }
            else{
                sum += mx;
                r--;
            }
        }
        else{
            cnt++;
            sum = 0;
            ok = false;
        }
    }
    if(sum > k){
        cnt++;
    }
    cout << cnt << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}