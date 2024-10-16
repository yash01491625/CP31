#include <bits/stdc++.h>
using namespace std;
const long long M = 1000000007;

void solve(){
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<long long, long long>> p(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> p[i].first >> p[i].second;
    }
    long long ans = abs(p[a].first - p[b].first) + abs(p[a].second - p[b].second);
    long long u = LLONG_MAX / 2;
    long long v = LLONG_MAX / 2;
    for(int i = 1; i <= k; i++){
        u = min(u, abs(p[a].first - p[i].first) + abs(p[a].second - p[i].second));
        v = min(v, abs(p[b].first - p[i].first) + abs(p[b].second - p[i].second));
    }
    ans = min(ans, u + v);
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
