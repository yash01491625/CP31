#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define endl "\n"

void solve()
{
    set<char> ans;
    string s;
    ll n;
    cin >> n;
    cin >> s;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ans.insert(s[i]);
        cnt += ans.size();
    }

    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}