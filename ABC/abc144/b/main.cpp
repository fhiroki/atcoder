#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;

    bool ok = false;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (N == i * j) ok = true;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
