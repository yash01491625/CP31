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
        vector<int> a(n);
        long long sum = 0;
        int neg = 0;
        int mn = 1e9;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, abs(a[i]));
            if(a[i] < 0) neg += 1;
            sum += abs(a[i]);
        }
        cout << (neg % 2 == 0 ? sum : sum - 2 * mn) << "\n";
    }
    return 0;
}
