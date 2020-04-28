#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    priority_queue<int> A;
    priority_queue<int> B;
    rep(i, n) {
        int a;
        cin >> a;
        A.push(a);
    }
    rep(i, m) {
        int b;
        cin >> b;
        B.push(b);
    }

    int ans = 0;
    while (!A.empty() && !B.empty()) {
        int a = A.top();
        int b = B.top();
        if (a >= b)
            A.pop(), B.pop();
        else
            break;
    }

    if (B.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
