#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, count = 1;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n; i++)
        cin >> y[i];
    unordered_map<int, int> a, b;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            a[x[i - 1]] = max(count, a[x[i - 1]]);
            break;
        }
        if (x[i - 1] == x[i])
            count++;
        else
        {
            a[x[i - 1]] = max(count, a[x[i - 1]]);
            count = 1;
        }
    }
    count = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            b[y[i - 1]] = max(count, b[y[i - 1]]);
            break;
        }
        if (y[i - 1] == y[i])
            count++;
        else
        {
            b[y[i - 1]] = max(count, b[y[i - 1]]);
            count = 1;
        }
    }
    int ans = 0;
    for (int i : x)
        ans = max(ans, a[i] + b[i]);
    for (int i : y)
        ans = max(ans, a[i] + b[i]);
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}