#include <bits/stdc++.h>
using namespace std;

// <<<<<<< ACTIVE SOLUTION (VERSION 2): Recursive by accessing the rod with array
char rod[3] = {'A', 'B', 'C'};

void hanoi(short cengkram, short rod_start, short rod_target){
    if(cengkram > 0){
        short rod_other = 3 - (rod_start + rod_target);

        hanoi(cengkram - 1, rod_start, rod_other);
        cout << cengkram << ' ' << rod[rod_start] << ' ' << rod[rod_target] << '\n';
        hanoi(cengkram - 1, rod_other, rod_target);
    }
}
// ======= VERSION 1:  Recursive by accessing the rod in the function itself
// void hanoi(short isi, char asal, char target, char sisa){
//     if(isi > 0){
//         hanoi(isi - 1, asal, sisa, target);
//         cout << isi << ' ' << asal << ' ' << target << '\n';
//         hanoi(isi - 1, sisa, target, asal);
//     }
// }
// >>>>>>> END ALTERNATIVES SOLUTIONS


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n;
    cin >> n;

// <<<<<<< ACTIVE SOLUTION (VERSION 2)
    hanoi(n, 0, 2);
// ======= VERSION 1
//     hanoi(n, 'A', 'C', 'B');
// >>>>>>> END ALTERNATIVES SOLUTIONS

    return 0;
}