#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int month = stoi(s.substr(5, 2));

    if (month > 4) cout << "TBD" << endl;
    else cout << "Heisei" << endl;

    return 0;
}
