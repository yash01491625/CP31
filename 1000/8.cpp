#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    vector<int> a(26, 0), b(26, 0);
    for(int i = 0; i < n; i++){
        a[s[i] - 'a']++;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        a[s[i] - 'a']--;
        b[s[i] - 'a']++;
        int sum = 0;    
        for(int j = 0; j < 26; j++){
            sum += (a[j] > 0) + (b[j] > 0);
        }
        ans = max(ans, sum);
    }
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}