#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n, m;
    cin >> n >> m;

    short size = max(n,m);
    vector<vector<int>> arr (size, vector(size, -1));
    
    
    for(short i = 0 ; i < n ; i++){
        for(short j = 0 ; j < m ; j++){
            cin >>  arr[i][j];
        }
    }

    for(short i = 0 ; i < size ; i++){
        for(short j = i + 1 ; j < size ; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    
    for(short i = 0 ; i < size ; i++){
        for(short j = 0 ; j < size ; j++){
            if(arr[i][j] != -1) cout << arr[i][j] << ' ';
        }

        cout << '\n';
    }

    return 0;
}