#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long a, b, k;
        cin >> a >> b >> k;
        vector<long long> bo(a + 1);
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            bo[x] += 1;
        }
        vector<long long> gi(b + 1);
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            gi[x] += 1;
        }
        long long np = 0;
        for (int i = 1; i <= a; i++) {
            if (bo[i] > 1) {
                np += bo[i] * (bo[i] - 1) / 2;
            }
        }
        for (int i = 1; i <= b; i++) {
            if (gi[i] > 1) {
                np += gi[i] * (gi[i] - 1) / 2;
            }
        }
        cout << k * (k - 1) / 2 - np << '\n';
    }
    return 0;
}