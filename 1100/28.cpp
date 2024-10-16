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
        int ans = 0;
        int i = n - 2;
        while(i >= 0) {
            if(a[i] == a[n - 1]) {
                i--;
                continue;
            }
            ans++;
            i = 2 * i - n + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}

/*
0 1 2 3 4 5
u cannot change an
so every element has to be equal to an
going from behind if any element is not equal to an directly jump to 2 * i - n + 1 since every element from 2 * i + 2 to n will be made an
*/ 
