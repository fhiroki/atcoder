#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if (a.size() > b.size())
        cout << a << endl;
    else
        cout << b << endl;
    return 0;
}
