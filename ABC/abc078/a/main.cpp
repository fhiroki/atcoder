#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    char x, y;
    cin >> x >> y;

    if (x == y)
        cout << '=' << endl;
    else if (x < y)
        cout << '<' << endl;
    else
        cout << '>' << endl;
    return 0;
}
