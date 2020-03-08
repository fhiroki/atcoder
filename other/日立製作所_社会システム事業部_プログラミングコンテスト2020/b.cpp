#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    int A, B, M;
    cin >> A >> B >> M;
    vector<int> a(A), b(B);
    rep(i, A) cin >> a[i];
    rep(i, B) cin >> b[i];

    int amin = *min_element(a.begin(), a.end());
    int bmin = *min_element(b.begin(), b.end());

    int minv = amin + bmin;
    rep(i, M) {
        int x, y, c;
        cin >> x >> y >> c;
        x--, y--;
        int sum = a[x] + b[y] - c;
        if (sum < minv) minv = sum;
    }

    cout << minv << endl;
    return 0;
}
