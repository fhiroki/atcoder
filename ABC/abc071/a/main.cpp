#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;

    if (abs(x - a) < abs(x - b))
        cout << "A" << endl;
    else
        cout << "B" << endl;
    return 0;
}
