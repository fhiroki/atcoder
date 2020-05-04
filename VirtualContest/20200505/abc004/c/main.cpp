#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    n %= 5 * 6;

    string card = "123456";
    rep(i, n) swap(card[i % 5], card[i % 5 + 1]);

    cout << card << endl;
    return 0;
}
