#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int w, h;
        cin >> w >> h;
        int hn1;
        cin >> hn1;
        vector<int> h1(hn1);
        for(int i = 0; i < hn1; i++) {
            cin >> h1[i];
        } 
        int hn2;
        cin >> hn2;
        vector<int> h2(hn2);
        for(int i = 0; i < hn2; i++) {
            cin >> h2[i];
        } 
        int vn1;
        cin >> vn1;
        vector<int> v1(vn1);
        for(int i = 0; i < vn1; i++) {
            cin >> v1[i];
        }
        int vn2;
        cin >> vn2;
        vector<int> v2(vn2);
        for(int i = 0; i < vn2; i++) {
            cin >> v2[i];
        }
        long long ans = -1;   
        ans = max(ans, (h1[hn1 - 1] - h1[0]) * 1LL * h);
        ans = max(ans, (h2[hn2 - 1] - h2[0]) * 1LL * h);
        ans = max(ans, (v1[vn1 - 1] - v1[0]) * 1LL * w);
        ans = max(ans, (v2[vn2 - 1] - v2[0]) * 1LL * w);
        cout << ans << "\n";
    }
    return 0;
}