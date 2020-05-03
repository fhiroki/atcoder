#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> s;
    string prev;
    cin >> prev;
    s.insert(prev);

    for (int i = 1; i < n; i++) {
        string w;
        cin >> w;
        if (prev.back() == w.front() && s.find(w) == s.end()) {
            s.insert(w);
            prev = w;
        } else {
            if (i % 2 == 0)
                cout << "LOSE" << endl;
            else
                cout << "WIN" << endl;
            return 0;
        }
    }

    cout << "DRAW" << endl;
    return 0;
}
