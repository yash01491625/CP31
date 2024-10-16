#include<bits/stdc++.h>
using namespace std;
const int M = 1000000007;

void solve(){
    int n, r, b;
    cin >> n >> r >> b;
    int x = r / (b + 1);
    int y = r % (b + 1);
    string s1 = "";
    for(int i = 0; i < x + 1; i++){
        s1 += "R";
    }
    string s2 = "";
    for(int i = 0; i < x; i++){
        s2 += "R";
    }
    for(int i = 0; i < y; i++){
        cout << s1 << "B";
    }
    for(int i = 0; i < abs(y - b); i++){
        cout << s2 << "B";
    }
    cout << s2 << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}