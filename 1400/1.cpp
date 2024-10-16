#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<long long> a;
        vector<long long> b; 
        for(int i = 0; i < n; i++) {
            long long k;
            cin >> k;
            if(k % 10 == 0) {
                b.push_back(k);
            } else {
                a.push_back(k);
            }
        }
        sort(b.begin(), b.end(), [&](long long x, long long y) {
            int z1 = 0;
            while(x) {
                if(x % 10 == 0) {
                    z1 += 1;
                    x /= 10;
                } else {
                    break;
                }
            }
            int z2 = 0;
            while(y) {
                if(y % 10 == 0) {
                    z2 += 1;
                    y /= 10;
                } else {
                    break;
                }
            }
            return (z1 > z2);
        });
        int n1 = a.size();
        int n2 = b.size();
        int i = 0;
        int j = 0;
        bool anna = true;
        long long ans = 0;
        for(int i = 0; i < n1; i++) {
            long long g = a[i];
            while(g) {
                ans += 1;
                g /= 10;
            }
        }
        bool ok = false;
        if(ans >= m + 1) {
            ok = true;
        }
        while(j < n2) {
            long long g = b[j];
            if(anna) {
                while(g % 10 == 0) {
                    g /= 10;
                }
                while(g) {
                    ans += 1;
                    g /= 10;
                }
                anna = false;
            } else {
                while(g) {
                    ans += 1;
                    g /= 10;
                }
                anna = true;
            }
            if(ans >= m + 1) {
                ok = true;
                break;
            }
            j += 1;
        }
        cout << (ok ? "Sasha\n" : "Anna\n");
    }
    return 0;
}