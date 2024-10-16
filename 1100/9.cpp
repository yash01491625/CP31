#include<bits/stdc++.h>
using namespace std;
const int M = 1000000007;

long long ok(long long n, vector<long long> &a, long long m, long long c){
    long long s = 0;
    for(int i = 0; i < n; i++){
        s += (m + a[i]) * (m + a[i]);
        if(s > c){
            return s;
        }
    }
    return s;
}

void solve(){
    long long n, c;
    cin >> n >> c;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long l = 1;
    long long r = 1e9;
    while(l <= r){
        long long m = l + (r - l) / 2;
        long long ans = ok(n, a, m, c);
        if(ans == c){
            cout << m / 2 << "\n";
            break;
        }
        else if(ans > c){
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}