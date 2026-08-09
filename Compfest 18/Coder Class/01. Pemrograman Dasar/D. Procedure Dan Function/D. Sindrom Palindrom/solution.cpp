#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin >> str;

    int len = str.length();

    for(int i = 0 ; i <= len / 2 ; i++){
        if(str[i] != str[len - 1 - i]){
            cout << "bukan palindrom\n";
            return; 
        }
    }

    cout << "palindrom\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n;
    cin >> n;

    while(n--) solve();

    return 0;
}