#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int m;
    cin >> m;
    ll min1 = 1e9;
    ll min2 = 1e9;
    ll ans = 0;
    for(int i = 0; i < m; i++){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int k = 0; k < n; k++){
            cin >> a[k];
        }
        sort(a.begin(), a.end());
        min1 = min(min1, a[0]);
        min2 = min(min2, a[1]);
        ans += (a[1]);
    }
    cout << ans - min2 + min1 << "\n";
}

int main()  
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}