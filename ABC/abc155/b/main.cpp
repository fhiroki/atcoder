#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int N;
    cin >> N;

    bool ok = true;
    rep(i, N) {
        int A;
        cin >> A;
        if (A % 2 != 0) continue;
        if (A % 3 != 0 && A % 5 != 0) ok = false;
    }

    if (ok) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;
    return 0;
}
