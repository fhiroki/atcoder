#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (c >= a && c <= b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
