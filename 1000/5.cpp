#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> v(n), in(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] %= k;
        if (!v[i])
            v[i] = k;
    }
    iota(in.begin(), in.end(), 0);
    stable_sort(in.begin(), in.end(), [&](int i, int j)
                { return v[i] >
                         v[j]; });
    for (int i = 0; i < n; i++)
    {
        cout << in[i] + 1 << " ";
    }
    cout << endl;
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