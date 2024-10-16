#include <bits/stdc++.h>
using namespace std;
const int M = 1000000007;
const int N = 200005;

void hello() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a.erase(unique(a.begin(), a.end()), a.end());
    n = (int)a.size();
    int ans = 1;
    int i = 1;
    while(i < n) {
        if(a[i] > a[i - 1]) {
            while(i < n && a[i] > a[i - 1]) {
                i++;
            }
        } else {
            while(i < n && a[i] < a[i - 1]) {
                i++;
            }
        }
        ans++;
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