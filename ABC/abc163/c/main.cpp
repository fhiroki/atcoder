#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n] = {0};

    rep(i, n - 1) {
        int a;
        cin >> a;
        A[a - 1]++;
    }

    rep(i, n) cout << A[i] << endl;

    return 0;
}
