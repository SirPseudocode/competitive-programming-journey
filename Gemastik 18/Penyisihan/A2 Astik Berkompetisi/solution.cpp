#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9 + 7;
const int MAX = (1 << 20) + 5; 
ll fact[MAX];

int stage;

ll power(ll base, ll exp) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

ll modInverse(ll n) {
    return power(n, mod - 2);
}

void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAX; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
}

ll kombinasi(int n, int r) {
    if (r < 0 || r > n) return 0;
    if (n == r || r == 0) return 1;
    
    ll num = fact[n];
    ll den = (fact[r] * fact[n - r]) % mod;
    
    return (num * modInverse(den)) % mod;
}

void a1(int n, int k) {
    for (int i = 1; i <= n; i++) {
        if ((1 << i) > k) {
            stage = i;
            cout << stage;
            return;
        }
    }
    stage = n;
    cout << stage;
}

void a2(int n, int k) {
    int needed = (1 << (stage - 1));

    ll ans = kombinasi(k - 1, needed - 1);
    
    ans = (ans * fact[needed]) % mod;
    
    ans = (ans * fact[(1 << n) - needed]) % mod;
    
    ans = (ans * (1LL << (n - stage + 1))) % mod;

    cout << ans << '\n';
}

void solve() {
    int n, k;
    cin >> n >> k;

    a1(n, k);
    cout << ' ';
    a2(n, k);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    precompute();

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    
    return 0;
}