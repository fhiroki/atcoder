#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    bool ok = false;
    if (A == B && B != C) ok = true;
    if (A == C && C != B) ok = true;
    if (B == C && C != A) ok = true;

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
