#include <bits/stdc++.h>
using namespace std;
const int M = 1000000007;

void hello(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    long long s1 = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s1 += (a[i]);
    }   
    sort(a.begin(), a.end());
    long long s2 = 0;
    for(int i = 0; i < 2 * k; i++){
        s2 += (a[i]);
    }
    long long ans = s1 - s2;
    for(int i = 0; i < k; i++){
        s2 = s2 - (a[2 * (k - i) - 1] + a[2 * (k - i) - 2]) + a[n - i - 1];
        ans = max(ans, s1 - s2);
    }
    cout << ans << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--){
        hello();
    }
    return 0;
}