#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long M = 1000000007;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = -1e3;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(i > 0 && (a[i - 1] == a[i] || ((a[i - 1] & 1) && (a[i] & 1)) || (!(a[i - 1] & 1) && !(a[i] & 1)))){
            sum = 0;

        }
        sum += a[i];
        ans = max(ans, sum);
        sum = max(sum, (int)0);
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