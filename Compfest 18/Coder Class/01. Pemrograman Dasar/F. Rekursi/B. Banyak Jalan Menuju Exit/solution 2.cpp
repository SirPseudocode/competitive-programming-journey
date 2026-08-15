#include <iostream>
#include <algorithm>

using namespace std;

void solve(int n, int m) {
    int total_steps = n + m;
    
    int smallest = min(n, m); 

    long long ans = 1;
    for (int i = 1; i <= smallest; ++i) {
        ans = ans * (total_steps - i + 1) / i;
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    if (cin >> n >> m) {
        solve(n - 1, m - 1);
    }
    
    return 0;
}