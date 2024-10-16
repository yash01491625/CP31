#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<pair<int, int>> p(n);
        for(int i = 0; i < n; i++) {
            cin >> p[i].first;
        }
        for(int i = 0; i < n; i++) {
            cin >> p[i].second;
        }
        sort(p.begin(), p.end(), [&](pair<int, int>& x, pair<int, int>& y) {
            return (x.second - x.first > y.second - y.first);
        });
        long long s1 = 0, s2 = 0;
        int ans = 0;
        int j = n - 1;
        for(int i = 0; i < n; i++) {
            long long sum = p[i].second - p[i].first;
            while(i < j && (sum + (p[j].second - p[j].first)) < 0) {
                j -= 1;
            }
            if(j <= i) {
                break;
            }
            ans += 1;
            j -= 1;
        }
        cout << ans << "\n";
    }
    return 0;
}

/*
Group of 2 is optimal since if suppose 3 people go, lets say p1, p2, p3
Then p1 > p2 > p3 . As its sure than p1 > 0 and p2 < 0 and |p2| > |p1|, thats p1 + p2 < 0 so need to add p3 to make budget possible p1 + p2 + p3 > 0, p3 > p1 + p2 so better to go with and p1 and p3  
*/