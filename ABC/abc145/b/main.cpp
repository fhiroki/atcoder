#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    bool ok = false;

    int half = N / 2;
    if (S.substr(0, half) == S.substr(half, N)) ok = true;

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
