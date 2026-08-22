#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    priority_queue<ll, vector<ll>, less<ll>> max_kiri;
    priority_queue<ll, vector<ll>, greater<ll>> min_kanan;

    while(n--){
        int temp;
        cin >> temp;

        max_kiri.push(temp);

        min_kanan.push(max_kiri.top());
        max_kiri.pop();

        if(max_kiri.size() < min_kanan.size()){
            max_kiri.push(min_kanan.top());
            min_kanan.pop();
        }

        if(max_kiri.size() > min_kanan.size()) cout << max_kiri.top() << '\n';
        else{
            ll sum = max_kiri.top() + min_kanan.top();

            if(sum % 2 == 0){
                cout << sum / 2 << '\n';
            }else{
                if(sum < 0) cout << '-' << abs(sum) / 2 << ".5\n";
                else cout << sum / 2 << ".5\n";
            }
        }
    }
    return 0;
}