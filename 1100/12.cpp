#include <bits/stdc++.h>
using namespace std;
const int M = 1000000007;

void hello() {
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector <int> b(n);
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int p = 0;
    long long ans = 1;
    int k = 0;
    for(int i = 0; i < n; i++) {
        while(p < n && a[p] <= b[i]) {
            ans = (ans * (i - k)) % M;
            k++;
            p++;
        }
        if(p == n) {
            break;
        }
    }
    while(p < n) {
        ans = (ans * (n - k)) % M;
        k++;
        p++;
    }
    cout << ans << "\n";
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