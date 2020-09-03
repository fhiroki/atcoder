#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    priority_queue<int> pq;
    rep(i, n) {
        int a;
        cin >> a;
        pq.push(a);
    }

    while (m > 0) {
        pq.push(pq.top() / 2);
        pq.pop();
        m--;
    }

    ll ans = 0;
    while (!pq.empty()) {
        ans += pq.top();
        pq.pop();
    }

    cout << ans << endl;
    return 0;
}
