#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double n, va, vb, l;
    cin >> n >> va >> vb >> l;

    rep(i, n) {
        double t = l / va;
        l = t * vb;
    }

    printf("%.10f\n", l);
    return 0;
}
