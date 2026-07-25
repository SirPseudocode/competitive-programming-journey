#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short a, b, c;
    cin >> a >> b >> c;
    
    if(
    (a > b && a > c && b + c > a) || 
    (b > a && b > c && a + c > b) || 
    (c > a && c > b && a + b > c)
    ) cout << "segitiga" << endl;
    else cout << "bukan segitiga" << endl;

    return 0;
}