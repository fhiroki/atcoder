#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> S(M);
    vector<int> C(M);
    rep(i, M) {
        int s, c;
        cin >> s >> c;
        s--;
        S[i] = s;
        C[i] = c;
    }

    vector<vector<int>> target(N);

    rep(i, M) {
        target[S[i]].push_back(C[i]);
    }

    bool end = false;
    rep(i, N) {
        if (end) break;
        int minv = 10;
        set<int> s(target[i].begin(), target[i].end());
        if (s.size() >= 2) {
            cout << -1;
            end = true;
            break;
        }
        for(auto t: target[i]) {
            if (t < minv) {
                if (i == 0 && t == 0) continue;
                minv = t;
            }
        }
        if (minv == 10) minv = 0;
        if (i == 0 && minv == 0) {
            if (N == 1) {
                cout << 0;
            } else {
                cout << -1;
            }
            end = true;
            break;
        }
        cout << minv;
    }
    cout << endl;

    return 0;
}
