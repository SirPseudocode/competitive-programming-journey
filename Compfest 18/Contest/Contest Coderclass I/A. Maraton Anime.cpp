#include <bits/stdc++.h>
using namespace std;

int chanek(int l, int r){
    cout << "Chanek " << l << ' ' << r << endl;

    int temp;
    cin >> temp;

    return temp;
}

int dengklek(int l, int r){
    cout << "Dengklek " << l << ' ' << r << endl;

    int temp;
    cin >> temp;

    return temp;
}

int min_val(int l, int r){
    if(l == r) return chanek(l, r) - 1;

    int mid = (l + r) /2;

    int left = chanek(l, mid);
    int right = chanek(mid + 1, r);

    if(left < right) return min_val(l, mid);
    else return min_val(mid + 1, r);
}

int max_val(int l, int r){
    if(l == r) return dengklek(l, r) + 1;

    int mid = (l + r) /2;

    int left = dengklek(l, mid);
    int right = dengklek(mid + 1, r);

    if(left > right) return max_val(l, mid);
    else return max_val(mid + 1, r);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int min = min_val(1, n), max = max_val(1, n);
    cout << "Jawab " << (max - min + 1) - n << endl;

    return 0;
}