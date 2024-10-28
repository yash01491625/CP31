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
        vector<pair<int, int>> a(n);
        vector<int> c(n);
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            c[i] = x;
            a[i].first = x;
            a[i].second = i;
        }    
        sort(a.begin(), a.end());
        vector<int> b(n);
        int e1 = -(n + 1) / 2;
        for(int i = 0; i < n; i += 2) {
            b[a[i].second] = e1;
            e1++;
        }
        int e2 = n / 2;
        for(int i = 1; i < n; i += 2) {
            b[a[i].second] = e2;
            e2--;
        }
        long long cost = 0;
        for(int i = 0; i < n; i++) {
            cost += 2 * 1LL * abs(b[i]) * c[i];
        }
        cout << cost << "\n";
        cout << "0 ";
        for(int i = 0; i < n; i++) {
            cout << b[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}