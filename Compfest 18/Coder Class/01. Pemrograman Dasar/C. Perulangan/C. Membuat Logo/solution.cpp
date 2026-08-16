#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n, m, l;
    cin >> n >> m >> l;

// <<<<<<< ACTIVE SOLUTION (VERSION 1)
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

// ======= VERSION 2
// 
//     string atas_bawah = string(m, '*');
//     string tengah = string(l, '*') + string(m-l, '.');
// 
//     for(short i = 0; i < l ; i++) cout << atas_bawah << '\n';
//     for(short i = 0; i < n - 2*l ; i++) cout << tengah << '\n';
//     for(short i = 0; i < l ; i++) cout << atas_bawah << '\n';
// 
// ======= VERSION 3
// 
//     for(short i = 0 ; i < n ; i++){
//         for(short j = 0 ; j < m ; j++){
//             if(
//                 // bold kiri
//                 (j < l)
//                 ||
//                 // bold atas
//                 (i < l)
//             ) cout << '*';
//             // bold bawah
//             else if(i >= n-l) cout << '*';
//             else cout << '.';
//         }
//         cout << '\n';
//     }
// 
// >>>>>>> END ALTERNATIVE SOLUTIONS

    return 0;
}