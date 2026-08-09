#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n;
    cin >> n;

    vector<short> arr;

    while(n--){
        short temp;
        cin >> temp;

        arr.push_back(temp);
    }

    reverse(arr.begin(), arr.end());

    for(short res : arr) cout << res << ' ';
    
    return 0;
}