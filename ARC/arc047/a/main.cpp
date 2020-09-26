#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    int ans = 0, tab = 1;
    rep(i, n) {
        char c;
        cin >> c;
        (c == '+') ? tab++ : tab--;
        if (tab > l) ans++, tab = 1;
    }

    cout << ans << endl;
    return 0;
}
