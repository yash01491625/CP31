#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    if (ans[0] != 1)
        cout << "NO"
             << "\n";
    else
        cout << "YES"
             << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}