#include <bits/stdc++.h>
using namespace std;
const int M = 1000000007;

#ifndef ONLINE_JUDGE
#include "../algo/debug.h"
#else
#define debug(...) 42
#endif

void hello() {
    int n, k, x;
    cin >> n >> k >> x;
    if(x == 1) {
        if(k == 1) {
            cout << "No\n";
        } else if(k == 2) {
            if(n % k != 0) {
                cout << "No\n";
            } else {
                cout << "Yes\n" << n / 2 << "\n";
                for(int i = 1; i <= n / 2; i++) {
                    cout << k << " \n"[i == n / 2]; 
                }
            }
        } else {
            if(n % 2 == 0) {
                cout << "Yes\n" << n / 2 << "\n";
                for(int i = 1; i <= n / 2; i++) {
                    cout << "2 " << " \n"[i == n / 2];
                }
            } else {
                int a = (n - 3) / 2;
                cout << "Yes\n" << a + 1 << "\n";
                for(int i = 1; i <= a; i++) {
                    cout << "2 ";
                }
                cout << "3 \n";
            }
        }
    } else {
        cout << "Yes\n" << n << "\n";
        for(int i = 1; i <= n; i++) {
            cout << "1 " << " \n"[i == n]; 
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        hello();
    }
    return 0;
}