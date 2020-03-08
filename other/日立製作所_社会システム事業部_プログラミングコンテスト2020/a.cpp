#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    bool ok = true;

    if (s.size() % 2 == 0) {
        for (int i = 0; i < s.size(); i+=2) {
            if (s.substr(i, 2) != "hi") ok = false;
        }
    } else {
        ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
