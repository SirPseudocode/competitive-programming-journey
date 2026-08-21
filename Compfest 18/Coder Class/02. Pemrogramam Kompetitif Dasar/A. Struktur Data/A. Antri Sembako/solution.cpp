#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin >> q;

    queue<string> antrian;

    while(q--){
        short temp;
        cin >> temp;

        if(temp == 1){
            string str;
            cin >> str;

            antrian.push(str);
        }else{
            cout << antrian.front() << '\n';
            antrian.pop();
        }
    }

    return 0;
}