#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int kits[30];

int main() {
    int n, m;
    cin >> n >> m;
    string name, kit;
    cin >> name >> kit;

    int ans = 1;
    rep(i, m) kits[kit[i] - 'A']++;
    rep(i, n) {
        int c = name[i] - 'A';
        if (kits[c])
            kits[c]--;
        else {
            rep(j, m) kits[kit[j] - 'A']++;
            if (kits[c] <= 0) {
                cout << -1 << endl;
                return 0;
            }
            kits[c]--;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
