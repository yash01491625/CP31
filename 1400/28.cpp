#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        vector<int> sp = {4, 8, 15, 16, 23, 42};
        vector<int> a(4);
        for (int i = 0; i < 4; i++) {
            cout << "? " << i + 1 << " " << i + 2 << endl;
            cout.flush();
            cin >> a[i];
        }
        do {
            bool ok = true;
            for (int i = 0; i < 4; i++) {
                if (sp[i] * sp[i + 1] != a[i]) ok = false;
            }
            if (ok) {
                cout << "! ";
                for (int i = 0; i < 6; i++) {
                    cout << sp[i] << " \n"[i == 5];
                }
                break;
            }
        } while (next_permutation(sp.begin(), sp.end()));
    }
    return 0;
}