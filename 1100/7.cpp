#include <bits/stdc++.h>
using namespace std;
const long long M = 1000000007;

bool ok(int n, int x, long long mid, vector<int> &a){
    long long w = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < mid){
            w += mid - a[i];
        }
    }
    return w <= x;
}

void solve(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long l = 0;
    long long r = 2e9;
    while(r - l > 1){
        long long mid = l + (r - l) / 2;
        if(ok(n, x, mid, a)){
            l = mid;
        }
        else{
            r = mid - 1;
        }
    }
    if(ok(n, x, l, a) && ok(n, x, r, a)){
        cout << r << "\n";
    } 
    else if(ok(n, x, l, a)){
        cout << l << "\n";
    }
    else if(ok(n, x, r, a)){
        cout << r << "\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}