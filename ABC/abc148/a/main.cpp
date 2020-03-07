#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    for (int i = 1; i <= 3; i++) {
        if (i == A || i == B) continue;
        cout << i << endl;
    }

    return 0;
}
