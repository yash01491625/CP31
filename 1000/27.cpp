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
        while(1) {
            long long nn = n;
            bool ok = true;
            while(nn) {
                int d = nn % 10;
                if(d && n % d != 0) {
                    ok = false;
                    break;
                }
                nn /= 10;
            }
            if(ok) break;
            n++;
        }
        cout << n << "\n";    
    }
    return 0;
}  
