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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    ll ans = 0;
    vector<ll> ia(n), ib(n), ic(n);
    iota(ia.begin(), ia.end(), 0);
    iota(ib.begin(), ib.end(), 0);
    iota(ic.begin(), ic.end(), 0);
    sort(ia.begin(), ia.end(), [&](int i, int j)
         { return a[i] > a[j]; });
    sort(ib.begin(), ib.end(), [&](int i, int j)
         { return b[i] > b[j]; });
    sort(ic.begin(), ic.end(), [&](int i, int j)
         { return c[i] > c[j]; });
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                int x = ia[i], y = ib[j], z = ic[k];
                if (x != y && y != z && x != z)
                    ans = max(ans, a[x] + b[y] + c[z]);
            }
        }
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