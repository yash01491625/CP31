#include<bits/stdc++.h>
using namespace std;
const int M = 1000000007;

void solve(){
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long ans = (b - 1);
    for(int i = 0; i < n; i++){
        b = min(a, v[i] + 1);
        ans += (b - 1);
    }
    cout << ans + 1 << "\n";
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