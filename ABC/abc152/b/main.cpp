#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string a_b = "";
    rep(i, b) a_b += to_string(a);

    string b_a = "";
    rep(i, a) b_a += to_string(b);

    if (a_b < b_a) cout << a_b << endl;
    else cout << b_a << endl;
    return 0;
}
