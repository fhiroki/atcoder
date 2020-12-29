#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    bool isAnt = true;

    while (n > 0) {
        if (isAnt)
            n -= a, isAnt = false;
        else
            n -= b, isAnt = true;
    }

    if (isAnt)
        cout << "Bug" << endl;
    else
        cout << "Ant" << endl;
    return 0;
}
