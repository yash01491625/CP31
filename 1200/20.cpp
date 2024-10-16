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
        string s;
        cin >> s;
        int l = 0, r = n - 1;
        while(l <= r) {
            if(s[l] == s[r]) {
                l += 1;
                r -= 1;
            } else {
                break;
            }
        }
        if(l > r) {
            cout << "0\n";
        } else {
            char c1 = s[l];
            bool can1 = true;
            int ans1 = 0;
            int l1 = l, r1 = r;
            while(l1 <= r1) {
                if(s[l1] != s[r1]) {
                    if(s[l1] == c1) {
                        l1 += 1;
                        ans1 += 1;
                    } else if(s[r1] == c1) {
                        r1 -= 1;
                        ans1 += 1;
                    } else {
                        can1 = false;
                        break;
                    }
                } else {
                    l1 += 1;
                    r1 -= 1;
                }
            }
            char c2 = s[r];
            bool can2 = true;
            int ans2 = 0;
            int l2 = l, r2 = r;
            while(l2 <= r2) {
                if(s[l2] != s[r2]) {
                    if(s[l2] == c2) {
                        l2 += 1;
                        ans2 += 1;
                    } else if(s[r2] == c2) {
                        r2 -= 1;
                        ans2 += 1;
                    } else {
                        can2 = false;
                        break;
                    }
                } else {
                    l2 += 1;
                    r2 -= 1;
                }
            }
            if(!can1 && !can2) {
                cout << "-1\n";
            } else if(!can2) {
                cout << ans1 << "\n";
            } else if(!can1) {
                cout << ans2 << "\n";
            } else {
                cout << min(ans1, ans2) << "\n";
            }
        }
    }
    return 0;
}