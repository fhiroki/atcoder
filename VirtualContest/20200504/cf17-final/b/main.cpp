#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int a[3] = {0};

    rep(i, s.size()) a[s[i] - 'a']++;
    sort(a, a + 3);

    if (a[2] - a[0] <= 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
