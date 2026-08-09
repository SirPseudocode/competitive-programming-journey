#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n;
    cin >> n;

    short arr[n];
    for(short i = 0 ; i < n ; i++) cin >> arr[i];

    for(short i = 0 ; i < n/2 ; i++){
        cout << arr[i] << ' ' << arr[n - 1 - i] << ' ';
    }

    if(n & 1) cout << arr[n / 2];
}