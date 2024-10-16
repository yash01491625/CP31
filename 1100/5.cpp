#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    ll ans = -1e18;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ll mn = 1e18, mx = -1e18;
            for (int j = 0; j < n; j += i)
            {
                ll sum = 0;
                for (int k = j; k < i + j; k++)
                    sum += v[k];
                mn = min(mn, sum);
                mx = max(mx, sum);
            }
            ans = max(ans, mx - mn);
        }
    }
    cout << ans << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}