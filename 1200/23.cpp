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
        string ans = "";
        bool found = false;
        for(char c = 'a'; c <= 'z'; c++) {
            if(s.find(c) == string::npos) {
                ans = c;
                found = true;
                break;
            }
        }
        if(found) {
            cout << ans << "\n";
            continue;
        }
        for(char x = 'a'; x <= 'z'; x++) {
            for(char y = 'a'; y <= 'z'; y++) {
                string here = "";
                here += x;
                here += y;
                if(s.find(here) == string::npos) {
                    found = true;
                    ans = here;
                    break;
                }
            }
            if(found) {
                break;
            }
        }
        if(found) {
            cout << ans << "\n";
            continue;
        }
        for(char x = 'a'; x <= 'z'; x++) {
            for(char y = 'a'; y <= 'z'; y++) {
                for(char z = 'a'; z <= 'z'; z++) {
                    string here = "";
                    here += x;
                    here += y;
                    here += z;
                    if(s.find(here) == string::npos) {
                        found = true;
                        ans = here;
                        break;
                    }
                }
                if(found) {
                    break;
                }
            }
            if(found) {
                break;
            }
        }
        if(found) {
            cout << ans << "\n";
        }
    }
    return 0;
}
