#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    ll t;
    bool ok = false;
    cin >> t;
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
        if (t > v[i])
            ok = true;
        t = v[i];
    }
    if (!ok)
    {
        cout << "YES" << endl;
        return;
    }
    if (ok)
    {
        if (k == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
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