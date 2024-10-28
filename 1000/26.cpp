#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long x, y, k;
        cin >> x >> y >> k;
        cout << (k * (y + 1) - 2) / (x - 1) + 1 + k << "\n";
    }
    return 0;
}

/*
First we need to buy that much sticks such that after replacing n * y amount of sticks you are left with k sticks and k coals 
*/