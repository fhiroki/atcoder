#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int A[3][3];
    rep(i, 3) rep(j, 3) cin >> A[i][j];

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int b;
        cin >> b;
        rep(j, 3) rep(k, 3) {
            if (A[j][k] == b) {
                A[j][k] = 0;
            }
        }
    }

    bool ok = false;
    if (A[0][0] == 0 && A[0][1] == 0 && A[0][2] == 0) ok = true;
    if (A[1][0] == 0 && A[1][1] == 0 && A[1][2] == 0) ok = true;
    if (A[2][0] == 0 && A[2][1] == 0 && A[2][2] == 0) ok = true;
    if (A[0][0] == 0 && A[1][0] == 0 && A[2][0] == 0) ok = true;
    if (A[0][1] == 0 && A[1][1] == 0 && A[2][1] == 0) ok = true;
    if (A[0][2] == 0 && A[1][2] == 0 && A[2][2] == 0) ok = true;
    if (A[0][0] == 0 && A[1][1] == 0 && A[2][2] == 0) ok = true;
    if (A[0][2] == 0 && A[1][1] == 0 && A[2][0] == 0) ok = true;

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
