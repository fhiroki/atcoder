#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);

    if (a == b)
        cout << "Draw" << endl;
    else if (a < b)
        cout << "Ant" << endl;
    else
        cout << "Bug" << endl;
    return 0;
}
