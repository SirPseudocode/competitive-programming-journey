#include <bits/stdc++.h>
#define ll long long
using namespace std;

// <<<<<<< ACTIVE SOLUTION (VERSION 1)
ll shortcutFaktorial(int n, int m){
    if(n <= 1 || n == m) return 1;

    return n * shortcutFaktorial(n - 1, m);
}

ll faktorial(int n){
    if(n <= 1) return 1;

    return n * faktorial(n - 1);
}


void solve(int n, int m){
    short biggest = max(n,m);
    short smallest = min(n,m);

    ll numerator = shortcutFaktorial(n + m, biggest);
    ll denumerator = faktorial(smallest);

    cout << numerator / denumerator << endl;
}
// ======= VERSION 2
// void solve(int n, int m) {
//     int total_steps = n + m;
//   
//     int smallest = min(n, m); 
// 
//     long long ans = 1;
//     for (int i = 1; i <= smallest; ++i) {
//         ans = ans * (total_steps - i + 1) / i;
//     }
// 
//     cout << ans << "\n";
// }
// >>>>>>>>> END ALTERNATIVE SOLUTIONS

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n, m;
    cin >> n >> m;

    solve(n - 1, m - 1);
    return 0;
}