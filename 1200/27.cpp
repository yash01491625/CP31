#include <bits/stdc++.h>
using namespace std;

void hello(){
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int one = 0;
    int zero = 0;
    for(int i = 0; i < n; i++){
        one += (s1[i] == '1');
        zero += (s1[i] == '0');
    }
    bool ok = true;
    for(int i = n - 1; i >= 0; i--){
        if(ok){
            if(s1[i] == s2[i]){
                if(s1[i] == '1'){
                    one--;
                }
                else{
                    zero--;
                }
            }
            else if(s1[i] != s2[i]){
                if(one != zero){
                    cout << "No\n";
                    return;
                }
                if(s1[i] == '1'){
                    one--;
                }
                else if(s1[i] == '0'){
                    zero--;
                }
                ok = false;
            }
        }
        else{
            if(s1[i] == s2[i]){
                if(one != zero){
                    cout << "No\n";
                    return;
                }
                if(s1[i] == '1'){
                    one--;
                }
                else if(s1[i] == '0'){
                    zero--;
                }
                ok = true;
            }
            else if(s1[i] != s2[i]){
                if(s1[i] == '0'){
                    zero--;
                }
                else{
                    one--;
                }
            }
        }
    }
    cout << "Yes\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--){
        hello();
    }
    return 0;
}