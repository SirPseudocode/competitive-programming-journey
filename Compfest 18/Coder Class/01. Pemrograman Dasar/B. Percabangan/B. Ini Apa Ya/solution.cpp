#include <bits/stdc++.h>
using namespace std;
#define elif else if

string checking(string str){
    if (str == "0") return "nol";
    elif (str[0] == '-') return "bilangan bulat negatif";
    elif (str[0] >= '0' && str[0] <= '9') return "bilangan bulat positif";

    return "kata";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    cout << checking(str) << endl;
    return 0;
}