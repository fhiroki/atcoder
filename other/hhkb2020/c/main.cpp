#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

const int MAX = 200005;
bool p[MAX];

int main() {
    int n;
    cin >> n;

    int t = 0;
    rep(i, n) {
        int x;
        cin >> x;
        p[x] = 1;
        for (int j = t; j < MAX; j++) {
            if (!p[j]) {
                cout << j << endl;
                t = j;
                break;
            }
        }
    }

    return 0;
}
