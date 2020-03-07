#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int N;
    string S, T;
    cin >> N >> S >> T;

    for (int i = 0; i < N; i++) {
        cout << S[i] << T[i];
    }
    cout << endl;

    return 0;
}
