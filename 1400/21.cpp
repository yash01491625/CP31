#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        long long tot = 0;
        long long bit = 0;
        while (n / (1LL << bit)) {
            tot += n / (1LL << bit);
            bit += 1;
        }
        cout << tot << '\n';
    }
    return 0;
}