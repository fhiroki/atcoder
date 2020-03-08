#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    string s;
    int q;
    cin >> s >> q;

    int t, r = 1;
    string fr, bc;
    rep(i, q) {
        cin >> t;
        if (t == 1) {
            r *= -1;
            swap(fr, bc);
        } else {
            int f;
            char c;
            cin >> f >> c;
            (f == 1 ? fr : bc) += c;
        }
    }

    reverse(fr.begin(), fr.end());
    if (r == -1) reverse(s.begin(), s.end());

    cout << fr + s + bc << endl;
    return 0;
}
