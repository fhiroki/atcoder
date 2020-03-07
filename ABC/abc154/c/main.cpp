#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int N;
    cin >> N;
    set<int> A;
    rep(i, N) {
        int a;
        cin >> a;
        A.insert(a);
    }

    if (A.size() == N) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
