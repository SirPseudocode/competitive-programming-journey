#include <bits/stdc++.h>
using namespace std;

int memoriCounterOfSegmentTree(int n){
    if(n == 1) return 1;

    return 1 + memoriCounterOfSegmentTree(ceil(n/2.0)) + memoriCounterOfSegmentTree(n / 2);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    cout << memoriCounterOfSegmentTree(n) << endl;
    return 0;
}