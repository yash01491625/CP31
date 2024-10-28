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
        int f = 0;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            char b = s[i];
            if(b == ')') {
                f--;
                if(f < 0) {
                    ans = max(ans, abs(f));
                }
            } else {
                f++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

/*
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
        stack<char> ss;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            char b = s[i];
            if(b == ')') {
                if(ss.empty()) {
                    ans += 1;
                } else {
                    ss.pop();
                }
            } else {
                ss.push(b);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
*/