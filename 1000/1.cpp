#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int mx = 2e5;
const int mod = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int zero_count = 0;
    int one_count = 0;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        zero_count += (s[i] == '0');
        one_count += (s[i] == '1');
    }
    if (zero_count == one_count)
    {
        cout << 0 << endl;
        return;
    }
    // int zero_count1 = 0, one_count1 = 0;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if ((s[i] == '0' && one_count == 0) || (s[i] == '1' && zero_count == 0))
            break;
        if (s[i] == '1' && zero_count > 0)
        {
            ans += '0';
            zero_count--;
        }
        else if (s[i] == '0' && one_count > 0)
        {
            ans += '1';
            one_count--;
        }
    }
    cout << (n - (ans.length())) << endl;
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