#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    string S, T, U;
    int A, B;
    cin >> S >> T >> A >> B >> U;

    if (U == S) A--;
    else if (U == T) B--;

    cout << A << ' ' << B << endl;
    return 0;
}
