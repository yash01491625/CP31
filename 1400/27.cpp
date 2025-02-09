#include <bits/stdc++.h>
using namespace std;
 
class dsu {
public:
    vector<int> p, sz;
    int n;
    dsu(int _n) : n(_n) {
        p.resize(n, -1);
        sz.resize(n, 1);
        for (int i = 0; i < n; ++i) {
            p[i] = i;
        }
    }

    inline int get(int v) {
        if (v == p[v]) {
            return v;
        }
        return p[v] = get(p[v]);
    }

    inline void unite(int u, int v) {
        int rootu = get(u);
        int rootv = get(v);
        if (rootu != rootv) {
            if (sz[rootu] < sz[rootv]) {
                swap(rootu, rootv);
            }
            p[rootv] = rootu;
            sz[rootu] += sz[rootv];
        }
    }
};
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    //  cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        dsu DSU(n + 1);
        for (int i = 0; i < m; i++) {
            int s;
            cin >> s;
            vector<int> a(s);
            for (int k = 0; k < s; k++) {
                cin >> a[k];
            }
            for (int k = 0; k < s - 1; k++) {
                DSU.unite(a[k + 1], a[k]);
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << DSU.sz[DSU.get(i)] << " \n"[i == n];
        }
    }
    return 0;
}