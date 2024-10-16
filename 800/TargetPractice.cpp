#include<bits/stdc++.h>
using namespace std;
const int M = 1000000007;

#ifndef ONLINE_JUDGE
#include "../../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(){
    string s[10];
    for(int i = 0; i < 10; i++){
        cin >> s[i];
    }
    int score = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(s[i][j] == 'X'){
                if(i <= j){
                    if(i + j < 10){
                        score += (i + 1);
                    }
                    else{
                        score += (10 - j);
                    }
                }
                else{
                    if(i + j < 10){
                        score += (j + 1);
                    }
                    else{
                        score += (10 - i);
                    }
                }
            }
        }
    }
    cout << score << "\n";
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