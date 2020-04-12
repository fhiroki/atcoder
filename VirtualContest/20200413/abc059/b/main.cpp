#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    if (a > b)
        cout << "GREATER" << endl;
    else if (a < b)
        cout << "LESS" << endl;
    else
        cout << "EQUAL" << endl;
    return 0;
}
