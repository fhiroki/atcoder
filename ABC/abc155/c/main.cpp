#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, int> dict;
    rep(i, N) {
        string S;
        cin >> S;
        dict[S]++;
    }

    int maxv = 0;
    for (auto x: dict) {
        int v = x.second;
        if (v > maxv) maxv = v;
    }
    for (auto d = dict.begin(); d != dict.end(); d++) {
        if (maxv == d->second) cout << d->first << endl;
    }

    return 0;
}
