#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e9 + 7;

void solve(){
    ll n, k, x;
    cin >> n >> k >> x;
    ll mn = k * (k + 1);
    ll mx = n * (n + 1) - (n - k) * (n - k + 1);
    if(2 * x >= mn && 2 * x <= mx){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}