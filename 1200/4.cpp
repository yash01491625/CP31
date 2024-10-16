#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;
    ll m = n * (n - 1) / 2;
    vector<ll> v(m);
    for(int i = 0; i < m; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll k = n;
    for(int i = 0; i < m; i += k){
        cout << v[i] << " ";
        k--;
    }
    cout << v[m - 1] << "\n";
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
