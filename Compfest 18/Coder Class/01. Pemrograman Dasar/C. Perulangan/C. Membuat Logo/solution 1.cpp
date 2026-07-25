#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n, m, l;
    cin >> n >> m >> l;

    for(short i = 0; i < l ; i++){
        for(short j = 0 ; j < m ; j++){
            cout << '*';
        }
        
        cout << endl;
    }

    for(short i = 0 ; i < n - 2*l ; i++){
        for(short j = 0 ; j < l ; j++){
            cout << '*';
        }
        for(short j = 0 ; j < m - l ; j++){
            cout << '.';
        }

        cout << endl;
    }

    for(short i = 0 ; i < l ; i++){
        for(short j = 0 ; j < m ; j++){
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}