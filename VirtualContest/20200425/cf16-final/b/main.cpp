#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    vector<int> a;
    for (int i = 1; i <= n; i++) {
        if (sum > n) break;
        a.push_back(i);
        sum += i;
    }

    for (int i = 1; i <= n; i++) {
        if (sum - i == n) {
            a.erase(a.begin() + i - 1);
            break;
        }
    }

    for (auto c : a) cout << c << endl;

    return 0;
}
