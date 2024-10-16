#include <bits/stdc++.h>
using namespace std;
const int M = 1000000007;
const int N = 200005;

void hello() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> a(m, vector<long long>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[j][i];
        }
    }
    int64_t ans = 0;
    for(int i = 0; i < m; i++) {
        sort(a[i].begin(), a[i].end());
        int64_t sum = a[i][0];
        for(int j = 1; j < n; j++) {
            ans += (a[i][j] * j) - sum;
            sum += a[i][j];
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        hello();
    }
    return 0;
}
