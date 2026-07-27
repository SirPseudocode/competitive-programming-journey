#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, p, ans = -1;
    cin >> n;
    while(n--){;
        cin >> p;
        ans = max(ans, p);
    }

    cout << ans << endl;
    return 0;
}