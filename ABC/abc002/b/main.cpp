#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string w;
    cin >> w;

    for (char c : w) {
        if (!(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o'))
            cout << c;
    }
    cout << endl;

    return 0;
}
