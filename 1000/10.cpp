#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long M = 1000000007;

void solve(){
    ll n;
    char c;
    cin >> n >> c;
    n = 2 * n;
    string s;
    cin >> s;
    s = s + s;
    int ans = 0, l = 0;
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == 'g'){
            l = i;
        }
        else if(s[i] == c){
            ans = max(ans, l - i);
        }
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