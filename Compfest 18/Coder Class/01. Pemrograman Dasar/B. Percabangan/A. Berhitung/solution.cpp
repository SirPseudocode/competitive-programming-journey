#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short a, b;
    char opr;
    
    if (cin >> a >> opr >> b) {
        switch (opr) {
            case '+': cout << a + b << "\n"; break;
            case '-': cout << a - b << "\n"; break;
            case '*': cout << (int)(a) * b << "\n"; break;
            case '/': cout << a / b << "\n"; break;
            case '%': cout << a % b << "\n"; break;
        }
    }
    return 0;
}