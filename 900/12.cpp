#include<bits/stdc++.h>
using namespace std;
const int M = 1000000007;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int ans1 = -2e5;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i > 0){
            ans1 = max(ans1, a[i - 1] - a[i]);
        }
    }
    int ans2 = a[0];
    for(int i = 1; i < n; i++){
        ans2 = max(a[i], ans2);
    }
    int ans3 = a[n - 1];
    for(int i = n - 2; i >= 0; i--){
        ans3 = min(ans3, a[i]);
    }
    cout << max(ans1, max(ans2 - a[0], a[n - 1] - ans3)) << "\n";
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