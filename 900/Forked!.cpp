#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1000000007;

#ifndef ONLINE_JUDGE
#include "../../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(){
    int a, b, x1, y1, x2, y2;
    cin >> a >> b >> x1 >> y1 >> x2 >> y2;
    set<pair<int, int>> s1, s2;
    s1.insert({x1 + a, y1 + b});
    s1.insert({x1 + a, y1 - b});
    s1.insert({x1 + b, y1 + a});
    s1.insert({x1 - b, y1 + a});
    s1.insert({x1 - a, y1 + b});
    s1.insert({x1 - a, y1 - b});
    s1.insert({x1 - b, y1 - a});
    s1.insert({x1 + b, y1 - a});
    s2.insert({x2 + a, y2 + b});
    s2.insert({x2 + a, y2 - b});
    s2.insert({x2 + b, y2 + a});
    s2.insert({x2 - b, y2 + a});
    s2.insert({x2 - a, y2 + b});
    s2.insert({x2 - a, y2 - b});
    s2.insert({x2 - b, y2 - a});
    s2.insert({x2 + b, y2 - a});
    int ans = 0;
    for(auto x : s2){
        if(s1.find(x) != s1.end()){
            ans++;
        }
    }
    cout << ans << "\n";
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