#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        long long ans = 1e18;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            ans = min(ans, a[i]);
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < n - 1; i++) {
            ans = min(ans, a[i + 1] - a[i]);
        }
        if(k == 1) {
            cout << ans << "\n";
        } else if(k == 2) {
            for (int i = 0; i < n - 1; i++) {
                for(int j = i + 1; j < n; j++) {
                    long long need = a[j] - a[i];
                    int left = 0;
                    int right = n - 1;
                    bool found = false;
                    while (left <= right) {
                        int mid = left + (right - left) / 2;
                        if (a[mid] == need) {
                            ans = 0;
                            found = true;
                            break;
                        } else if (a[mid] > need) {
                            right = mid - 1;
                        } else {
                            left = mid + 1;
                        }
                    }
                    if (!found) {
                        long long option1 = (left < n) ? abs(a[left] - need) : abs(a[right] - need);
                        long long option2 = (right >= 0) ? abs(a[right] - need) : abs(a[left] - need);
                        ans = min(ans, min(option1, option2));
                    }
                }
            }
            cout << ans << "\n";
        } else {
            cout << "0\n";
        }
    }
    return 0;
}