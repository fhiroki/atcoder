#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;

    float odd = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 1) odd++;
    }

    cout << odd / N << endl;
    return 0;
}
