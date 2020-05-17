#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string n;
    cin >> n;

    int a = n[n.size() - 1] - '0';

    if (a <= 1 || a == 6 || a == 8)
        cout << "pon" << endl;
    else if (a == 3)
        cout << "bon" << endl;
    else
        cout << "hon" << endl;
    return 0;
}
