#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string n;
    cin >> n;

    if (n[0] == n[1] && n[1] == n[2] || n[1] == n[2] && n[2] == n[3])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
