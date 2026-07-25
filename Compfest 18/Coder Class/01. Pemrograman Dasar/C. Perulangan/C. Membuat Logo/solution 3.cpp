#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n, m, l;
    cin >> n >> m >> l;

    for(short i = 0 ; i < n ; i++){
        for(short j = 0 ; j < m ; j++){
            if(
                // bold kiri
                (j < l)
                ||
                // bold atas
                (i < l)
            ) cout << '*';
            // bold bawah
            else if(i >= n-l) cout << '*';
            else cout << '.';
        }
        cout << '\n';
    }
    return 0;
}