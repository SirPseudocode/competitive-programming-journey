#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n, m, l;
    cin >> n >> m >> l;

    string atas_bawah = string(m, '*');
    string tengah = string(l, '*') + string(m-l, '.');

    for(short i = 0; i < l ; i++) cout << atas_bawah << '\n';
    for(short i = 0; i < n - 2*l ; i++) cout << tengah << '\n';
    for(short i = 0; i < l ; i++) cout << atas_bawah << '\n';

    return 0;
}