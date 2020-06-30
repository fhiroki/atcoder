#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

vector<char> v(11, 'x');

void printVec(int s, int e) {
    for (int i = s; i <= e; i++) {
        cout << v[i];
        if (i == e)
            cout << endl;
        else
            cout << ' ';
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    rep(i, a) {
        int p;
        cin >> p;
        if (p == 0) p = 10;
        v[p] = '.';
    }

    rep(i, b) {
        int q;
        cin >> q;
        if (q == 0) q = 10;
        v[q] = 'o';
    }

    printVec(7, 10);
    cout << " ";
    printVec(4, 6);
    cout << "  ";
    printVec(2, 3);
    cout << "   ";
    printVec(1, 1);

    return 0;
}
