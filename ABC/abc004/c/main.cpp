#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    n %= 30;
    string s = "123456";
    rep(i, n) swap(s[i % 5], s[i % 5 + 1]);
    cout << s << endl;
    return 0;
}
