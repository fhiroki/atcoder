#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    double w, h;
    cin >> w >> h;

    if (w / h == 4.0 / 3.0)
        cout << "4:3" << endl;
    else
        cout << "16:9" << endl;
    return 0;
}
