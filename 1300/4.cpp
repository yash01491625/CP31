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
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        unordered_map<int, int> f;
        for(int i = 0; i < n; i++) {
            int num = a[i];
            for(int j = 2; j * j <= num; j++) {
                if(num % j == 0) {
                    while(num % j == 0) {
                        f[j] += 1;
                        num /= j;
                    }
                }
            }
            if(num != 1) {
                f[num] += 1;
            }
        }
        bool ok = true;
        for(auto& p : f) {
            if(p.second % n != 0) {
                ok = false;
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}