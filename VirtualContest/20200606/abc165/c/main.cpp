#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int n, m, q;
int a[50], b[50], c[50], d[50];
int ans;

void dfs(vector<int> A) {
    if (A.size() == n + 1) {
        int sum = 0;
        rep(i, q) if (A[b[i]] - A[a[i]] == c[i]) sum += d[i];
        ans = max(ans, sum);
        return;
    }

    A.push_back(A.back());
    while (A.back() <= m) {
        dfs(A);
        A.back()++;
    }
}

int main() {
    cin >> n >> m >> q;
    rep(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];

    dfs(vector<int>(1, 1));

    cout << ans << endl;
    return 0;
}
