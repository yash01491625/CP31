#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), p(51, -1);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(p[a[i]] == -1) {
                p[a[i]] = i;
            }
        }
        vector<int> b;
        unordered_set<int> s;
        for(int i = 0; i < n; i++) {
            if(s.find(a[i]) == s.end()) {
                b.push_back(a[i]);
                s.insert(a[i]);
            }
        }
        stack<int> s1;
        for(int i = (int) b.size() - 1; i >= 0; i--) {
            s1.push(b[i]);
        }
        for(int k = 1; k <= q; k++) {
            int t;
            cin >> t;
            cout << p[t] + 1 << " ";
            stack<int> s2;
            while(s1.top() != t) {
                p[s1.top()]++;
                s2.push(s1.top());
                s1.pop();
            }
            p[s1.top()] = 0;
            int x = s1.top();
            s1.pop();
            while(!s2.empty()) {
                s1.push(s2.top());
                s2.pop();
            }
            s1.push(x);
        }
    }
    return 0;
}