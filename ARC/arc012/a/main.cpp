#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string day;
    cin >> day;

    int ans = 0;
    if (day[0] == 'M')
        ans = 5;
    else if (day == "Tuesday")
        ans = 4;
    else if (day[0] == 'W')
        ans = 3;
    else if (day[0] == 'T')
        ans = 2;
    else if (day[0] == 'F')
        ans = 1;

    cout << ans << endl;
    return 0;
}
