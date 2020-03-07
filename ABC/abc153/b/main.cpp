#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int H, N;
    cin >> H >> N;

    bool ok = false;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        H -= A;
        if (H <= 0) {
            ok = true;
            break;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
