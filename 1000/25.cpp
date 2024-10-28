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
        sort(a.begin(), a.end());
        bool ok = false;
        for(int i = 0; i < n - 1; i++) {
            if(a[i] == a[i + 1]) ok = true;
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}

/*
2^n = 2^(n - 1) + 2^(n - 1) = 2^(n - 1) + 2 * 2^(n - 2) = 2^(n - 1) + 2^(n - 2) + 2 * 2^(n - 3)...
*/