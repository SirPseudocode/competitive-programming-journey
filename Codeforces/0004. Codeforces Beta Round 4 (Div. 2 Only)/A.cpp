#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short w;
    cin >> w;

// <<<<<<< ACTIVE SOLUTION (VERSION 1): Bitwise Manipulation

    if(w > 2 && !(w & 1)) cout << "YES" << endl;
    else cout << "NO" << endl;

// ======= VERSION 2: Modulo operator
// 
//     if(w > 2 && w % 2 == 0) cout << "YES" << endl;
//     else cout << "NO" << endl;
// 
// >>>>>>> END ALTERNATIVE SOLUTIONS
    return 0;
}