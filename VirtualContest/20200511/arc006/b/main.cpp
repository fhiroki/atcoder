#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, l;
    string first;
    getline(cin, first);
    istringstream s(first);
    s >> n >> l;

    int w = n * 2 - 1;
    char a[l][w];

    rep(i, l) {
        string line;
        getline(cin, line);
        rep(j, line.size()) a[i][j] = line[j];
    }

    string goal;
    getline(cin, goal);
    int g = 0;
    rep(i, goal.size()) if (goal[i] == 'o') g = i;

    for (int i = l - 1; i >= 0; i--) {
        if (g - 1 >= 0 && a[i][g - 1] == '-')
            g -= 2;
        else if (g + 1 < w && a[i][g + 1] == '-')
            g += 2;
    }

    cout << g / 2 + 1 << endl;
    return 0;
}
