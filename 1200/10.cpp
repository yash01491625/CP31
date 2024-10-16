#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 5;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long> p1(n);
        p1[0] = a[0];
        for(int i = 1; i < n; i++) {
            if(a[i] > p1[i - 1]) {
                p1[i] = a[i];
            } else {
                p1[i] = p1[i - 1];
            }
        } 
        vector<long long> p2(n + 1);
        for(int i = 1; i <= n; i++) {
            p2[i] = p2[i - 1] + a[i - 1];
        }
        for(int i = 0; i < q; i++) {
            long long k;
            cin >> k;
            int ans = -1;
            int left = 0;
            int right = n - 1;
            while(left <= right) {
                long long mid = left + ((right - left) >> 1);
                if(p1[mid] > k) {
                    ans = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            if(ans == -1) {
                ans = n;
            }
            // int ans = upper_bound(p1.begin(), p1.end(), k) - p1.begin();
            cout << p2[ans] << " \n"[i == q - 1];
        }
    }
    return 0;
}