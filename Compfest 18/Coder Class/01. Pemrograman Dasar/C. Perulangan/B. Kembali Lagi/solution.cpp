#include <bits/stdc++.h>
using namespace std;

int tp(int a, int b, int c, int z){
    return (a*z + b) % c;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, x, counter = 1;
    cin >> a >> b >> c >> x;

    int z = tp(a, b, c, x);

    while(z != x){
        z = tp(a, b, c, z);
        counter++;
    }

    cout << counter << endl;
    return 0;
}