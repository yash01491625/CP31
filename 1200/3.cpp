#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long M = 1000000007;

ll gcd(ll x, ll y){
    if(y == 0){
        return x;
    }
    gcd(y, x % y);
}

ll lcm(ll x, ll y){
    return (x * y) / gcd(x, y);
}

void solve(){
    ll n, x, y;
    cin >> n >> x >> y;
    ll r = n / x;
    ll b = n / y;
    ll p = n / lcm(x, y);
    r -= p;
    b -= p;
    ll sum1 = r * (2 * n - r + 1) / 2;
    ll sum2 = b * (b + 1) / 2;
    cout << sum1 - sum2 << "\n";
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
