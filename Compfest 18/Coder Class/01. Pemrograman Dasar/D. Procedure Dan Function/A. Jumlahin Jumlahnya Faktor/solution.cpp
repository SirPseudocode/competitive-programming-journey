#include <bits/stdc++.h>
using namespace std;

int g(int x){
    int counter = sqrt(x), temp = 2;

    for(int i = 2 ; i <= counter ; i++){
        if(x % i == 0){
            if(i * i == x) temp ++;
            else temp += 2;
        }
    }
    
    return temp;
}

int h(int x){
    int temp = 1;
    for(int i = 2 ; i <= x ; i++) temp += g(i);

    return temp;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;

    cout << h(x) << endl;
    return 0;
}