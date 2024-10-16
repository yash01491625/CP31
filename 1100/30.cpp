#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int i = 0, j = n - 1;
        while(i <= j && a[i] == a[j]) {
            i++;
            j--;
        }
        if(i > j) {
            cout << "Yes\n";
        } else {
            int e1 = a[i];
            int e2 = a[j];
            int x, y;
            bool ok1 = true;
            x = i + 1;
            y = j;
            while(x <= y) {
                if(a[x] != a[y]) {
                    if(a[x] == e1) {
                        x++;
                    } else if(a[y] == e1) {
                        y--;
                    } else {
                        ok1 = false;
                        break;
                    }
                } else {
                    x++;
                    y--;
                }
            }
            bool ok2 = true;
            x = i;
            y = j - 1;
            while(x <= y) {
                if(a[x] != a[y]) {
                    if(a[x] == e2) {
                        x++;
                    } else if(a[y] == e2) {
                        y--;
                    } else {
                        ok2 = false;
                        break;
                    }
                } else {
                    x++;
                    y--;
                }
            }
            cout << ((ok1 || ok2) ? "Yes\n" : "No\n");
        }
    }
    return 0;
}