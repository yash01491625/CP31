#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pb push_back
#define ff find
#define ss second
const int mx = 2e5 + 5;
const int mod = 1e9 + 7;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n], b[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    ll ans = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == k)
            break;
        sum += a[i];
        mx = max(mx, b[i]);
        ans = max(ans, sum + mx * (k - i - 1));
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}