#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    while(q--){
        short a, b, c;
        cin >> a >> b >> c;
        b--;     c--;

        if(a == 1) swap(s[b], s[c]);
        else reverse(s.begin() + b, s.begin() + c + 1);
    }

    cout << s << endl;
    return 0;
}