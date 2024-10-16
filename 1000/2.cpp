#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll ans1 = k;
    ll ans2 = 2;
    if (k == 4)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                ans2--;
                if (ans2 == 0)
                    break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] % k == 0)
        {
            cout << 0 << "\n";
            return;
        }
        else
        {
            ll t = abs(k - (v[i] % k));
            ans1 = min(ans1, t);
        }
    }
    if (k == 4)
        cout << min(ans1, ans2);
    else
        cout << ans1;
    cout << "\n";
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