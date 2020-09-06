#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0;
    rep(i, n) {
        char r;
        cin >> r;
        if (r == 'F') continue;
        sum += abs(r - 'F') - 1;
    }

    printf("%.14f\n", sum / n);
    return 0;
}
