#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short w;
    cin >> w;

    if(w > 2 && !(w & 1)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}