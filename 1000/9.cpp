#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    if (!(n & 1))
    {
        cout << n / 2 << " " << n / 2 << endl;
        return;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                cout << n / i << " " << (n - n / i) << endl;
                return;
            }
        }
    }
    cout << n - 1 << " " << 1 << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}