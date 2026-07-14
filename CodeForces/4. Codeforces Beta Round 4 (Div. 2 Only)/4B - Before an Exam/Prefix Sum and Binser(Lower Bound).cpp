#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int d, sumTime;
    cin >> d >> sumTime;

    int arrMin[d], arrMax[d], gap[d];
    int sumMin = 0;

    for(int i = 0 ; i < d ; i++){
        cin >> arrMin[i] >> arrMax[i];

        int current_diff = arrMax[i] - arrMin[i];

        if(i == 0) gap[i] = current_diff;
        else gap[i] = gap[i-1] + current_diff;
        
        sumMin += arrMin[i];
    }

    if(sumMin == sumTime){
        cout << "YES\n";
        for(int i = 0 ; i < d ; i++) cout << arrMin[i] << ' ';
        cout << '\n';
    } 
    else if(sumMin + gap[d-1] < sumTime || sumTime < sumMin){
        cout << "NO\n";
    } 
    else {
        int excess = sumTime - sumMin;
        int ans = -1;
        int left = 0, right = d - 1;
        
        while(left <= right){
            int mid = (left + right) / 2;

            if(gap[mid] >= excess){
                ans = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }

        cout << "YES\n";
        for(int i = 0; i < d; i++) {
            if (i < ans) {
                cout << arrMax[i] << " ";
            } else if (i == ans) {
                int prevGap = (i == 0) ? 0 : gap[i - 1];
                int remaining_extra_needed = excess - prevGap;
                cout << arrMin[i] + remaining_extra_needed << " ";
            } else {
                cout << arrMin[i] << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}