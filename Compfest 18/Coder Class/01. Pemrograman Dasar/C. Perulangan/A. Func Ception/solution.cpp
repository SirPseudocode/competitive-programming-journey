#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    while(x < y){
        cout << x << endl;
        x = a*x + b;
    }

    return 0;
}