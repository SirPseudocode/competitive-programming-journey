#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, input, ans = 0;
    cin >> n;

    int counter = n * n;
    while(counter--){
        cin >> input;
        if(counter % (n + 1) == 0) ans += input;
    }

    cout << ans << endl;
    return 0;
}