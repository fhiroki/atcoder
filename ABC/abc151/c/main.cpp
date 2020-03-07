#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<string>> A(N);
    rep(i, M) {
        int p;
        string s;
        cin >> p >> s;
        p--;
        A[p].push_back(s);
    }

    int ac = 0;
    int wa = 0;
    rep(i, N) {
        int wa_i = 0;
        rep(j, A[i].size()) {
            if (A[i][j] == "WA") wa_i++;
            else if (A[i][j] == "AC") {
                ac++;
                wa += wa_i;
                break;
            }
        }
    }

    cout << ac << ' ' << wa << endl;
    return 0;
}
