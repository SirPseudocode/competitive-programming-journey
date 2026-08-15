#include <bits/stdc++.h>
#define ll long long
using namespace std;

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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n, m;
    cin >> n >> m;

    solve(n - 1, m - 1);
    return 0;
}