#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;

    if (s.size() < k) {
        cout << 0 << endl;
        return 0;
    }

    set<string> st;
    for (int i = 0; i <= s.size() - k; i++) {
        st.insert(s.substr(i, k));
    }

    cout << st.size() << endl;
    return 0;
}
