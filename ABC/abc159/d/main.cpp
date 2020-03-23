#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[200005];
    int a[200005];

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ans += A[a[i]];
        A[a[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        cout << ans - A[a[i]]+1 << endl;
    }

    return 0;
}
