#include <bits/stdc++.h>
using namespace std;

int N, K;
int current_permutation[10];
bool used[10];

void FindPermutation(int current_slot) {
    if (current_slot > N) {
        for (int i = 1; i <= N; i++) {
            cout << current_permutation[i];
            if (i < N) cout << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; i++) {
    
        if (!used[i]) {
            if (current_slot == 1 || abs(i - current_permutation[current_slot - 1]) <= K) {
                current_permutation[current_slot] = i;
                used[i] = true; 
                
                FindPermutation(current_slot + 1);
                
                used[i] = false; 
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> K;
    for(int i = 0 ; i <= N ; i++) used[i] = 0;

    FindPermutation(1);
    
    return 0;
}