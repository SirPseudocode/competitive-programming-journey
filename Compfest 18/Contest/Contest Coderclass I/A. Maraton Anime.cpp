#include <bits/stdc++.h>
using namespace std;

int query_chanek(int l, int r){
    cout << "Chanek " << l << ' ' << r << endl;

    int temp;
    cin >> temp;

    return temp;
}

int query_dengklek(int l, int r){
    cout << "Dengklek " << l << ' ' << r << endl;

    int temp;
    cin >> temp;

    return temp;
}

int binser_minVal(int r){
    int l = 1;
    int base = query_chanek(1, r);

    while(l <= r){
        if(l == r) return query_chanek(l, l) - 1;

        int mid = l + (r - l) / 2;
        int temp = query_chanek(1, mid);

        if(temp == base) r = mid;
        else l = mid + 1;
    }

    return query_chanek(l, l) - 1;
}

int binser_maxVal(int r){
    int l = 1;
    int base = query_dengklek(1, r);

    while(l <= r){
        if(l == r) return query_dengklek(l, l) + 1;

        int mid = l + (r - l) / 2;
        int temp = query_dengklek(1, mid);

        if(temp == base) r = mid;
        else l = mid + 1;
    }

    return query_dengklek(l, l) + 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int min = binser_minVal(n);
    int max = binser_maxVal(n);

    cout << "Jawab " << (max - min + 1) - n << endl;

    return 0;
}