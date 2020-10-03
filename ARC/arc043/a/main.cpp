#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, A, B;
    double a, b;
    cin >> n >> A >> B;
    int s[n];
    ll sum = 0;
    rep(i, n) {
        cin >> s[i];
        sum += s[i];
    }
    sort(s, s + n);

    a = sum / double(n);
    b = s[n - 1] - s[0];

    double p = B / b;
    double q = A - B / b * a;

    if (b == 0)
        cout << -1 << endl;
    else
        printf("%.10f %.10f\n", p, q);

    return 0;
}
