#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    bool t = false;
    int rows[n], columns[n];
    rep(i, n) rows[i] = i, columns[i] = i;

    rep(i, q) {
        int op;
        cin >> op;
        if (op == 3) {
            t = !t;
            continue;
        }

        int A, B;
        cin >> A >> B;
        A--, B--;

        switch (op) {
            case 1:
                if (t)
                    swap(columns[A], columns[B]);
                else
                    swap(rows[A], rows[B]);
                break;
            case 2:
                if (t)
                    swap(rows[A], rows[B]);
                else
                    swap(columns[A], columns[B]);
                break;
            case 4:
                if (t) swap(A, B);
                cout << (ll)rows[A] * n + (ll)columns[B] << endl;
                break;
            default:
                break;
        }
    }

    return 0;
}
