#include <bits/stdc++.h>
using namespace std;

void hanoi(short isi, char asal, char target, char sisa){
    if(isi > 0){
        hanoi(isi - 1, asal, sisa, target);
        cout << isi << ' ' << asal << ' ' << target << '\n';
        hanoi(isi - 1, sisa, target, asal);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n;
    cin >> n;

    hanoi(n, 'A', 'C', 'B');
    return 0;
}