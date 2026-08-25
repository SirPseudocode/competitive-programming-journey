#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;

ll fpb(int n, int m){
    if(m == 0) return n;

    return fpb(m, n % m);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    
    ll n, m;
    cin >> n >> m;

    ll pembagi = fpb(n, m);

    ll rasioN = n / pembagi, rasioM = m / pembagi;

    cout << ((n + rasioN) * (m + rasioM)) - n * m << endl;
    return 0;
}