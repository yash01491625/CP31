#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long M = 1000000007;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(26, 0);
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        a[s[i] - 'a']++;
    }
    int cnt1 = 0;
    for(int i = 0; i < 26; i++){
        if(a[i] & 1){
            cnt1++;
        }
    }
    int cnt2 = max(0, cnt1 - 1);
    if(cnt2 <= k && k <= n){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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