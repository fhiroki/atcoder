#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
const int MAX = 1000005;
int c[MAX];

int main() {
    int n;
    cin >> n;

    int G = 0;
    rep(i, n) {
        int a;
        cin >> a;
        G = __gcd(G, a);
        c[a]++;
    }

    if (G > 1) {
        cout << "not coprime" << endl;
        return 0;
    }

    for (int i = 2; i < MAX; i++) {
        int cnt = 0;
        for (int j = i; j < MAX; j += i) cnt += c[j];
        if (cnt > 1) {
            cout << "setwise coprime" << endl;
            return 0;
        }
    }

    cout << "pairwise coprime" << endl;
    return 0;
}
