#include<bits/stdc++.h>
using namespace std;
const int M = 1000000007;

void solve(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n), c(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if((x | a[i]) != x){
            break;
        }
        ans |= a[i];
    }
    for(int i = 0; i < n; i++){
        if((x | b[i]) != x){
            break;
        }
        ans |= b[i];
    }
    for(int i = 0; i < n; i++){
        if((x | c[i]) != x){
            break;
        }
        ans |= c[i];
    }
    cout << (ans == x ? "Yes\n" : "No\n");
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