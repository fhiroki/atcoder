#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int N;
    cin >> N;
    int x[N];
    int y[N];
    rep(i, N) cin >> x[i] >> y[i];

    vector<int> v(N);
    iota(v.begin(), v.end(), 0);

    double ans = 0;
    int cnt = 0;

    do {
        cnt++;
        rep(k, N - 1) {
            int i = v[k];
            int j = v[k + 1];
            ans += sqrt(pow(x[i] - x[j], 2.0) + pow(y[i] - y[j], 2.0));
        }
    } while (next_permutation(v.begin(), v.end()));

    cout << fixed;
    cout << setprecision(10) << ans / cnt << endl;
    return 0;
}
