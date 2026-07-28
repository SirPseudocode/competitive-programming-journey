#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n;
    cin >> n;

    short a[n + 1];
    for(short i = 1; i <= n ; i++) cin >> a[i];

    for(short i = 1 ; i <= n ; i++){
        for(short j = i + 1 ; j <= n ; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
                cout << i << ' ' << j << endl;
            }
        }
    }
    return 0;
}