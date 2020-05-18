#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;

    n %= 500;

    if (n <= a)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
