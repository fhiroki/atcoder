#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s[0] == 'S')
        cout << "Cloudy" << endl;
    else if (s[0] == 'C')
        cout << "Rainy" << endl;
    else
        cout << "Sunny" << endl;
    return 0;
}
