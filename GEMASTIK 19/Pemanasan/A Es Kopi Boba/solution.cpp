#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int boba[n], total = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> boba[i];

        total += boba[i];
    }

    if(total % n != 0) cout << "TIDAK SESUAI\n";
    else{
        int avg = total / n;
        int indexBobaPertama = -1, indexBobaKedua = -1, totalSalah = 0;
        for(int i = 0 ; i < n ; i++){
            if(boba[i] != avg){
                totalSalah++;

                if(indexBobaPertama == -1){
                    indexBobaPertama = i;
                    continue;
                }

                if(indexBobaKedua == -1){
                    indexBobaKedua = i;
                    continue;
                }
            }
        }

        if(totalSalah == 0) cout << "SESUAI\n";
        else if(totalSalah == 2){
            if(boba[indexBobaPertama] > boba[indexBobaKedua]){
                cout << abs(avg - boba[indexBobaPertama]) << ' ' << indexBobaPertama + 1 << ' ' << indexBobaKedua + 1 << '\n';
            }else{
                cout << abs(avg - boba[indexBobaPertama]) << ' ' << indexBobaKedua + 1 << ' ' << indexBobaPertama + 1 << '\n';
            }
        }else cout << "TIDAK SESUAI\n";
    }
    return 0;
}