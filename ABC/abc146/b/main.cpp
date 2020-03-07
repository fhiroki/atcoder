#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    rep(i, S.size()) {
        char s = S[i];
        s += N;
        if (s > 'Z') s -= 'Z' - 'A' + 1;
        cout << s;
    }
    cout << endl;

    return 0;
}
