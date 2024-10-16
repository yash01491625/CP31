#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n == 2)
    {
        cout << 1000000000000000000 << "\n";
        return;
    }
    ll r = 2;
    while (1)
    {
        set<ll> ans;
        for (int i = 0; i < n; i++)
            ans.insert(a[i] % r);
        if (ans.size() == 2)
            break;
        r = r * 2;
    }
    cout << r << "\n";
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