#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<bool> lost(n + 1, 1);

    while(k--){
        int temp;
        cin >> temp;
        
        lost[temp] = 0;
    }

    for(int i = 1 ; i <= n ; i++){
        if(lost[i]) cout << i << ' ';
    }

    return 0;
}