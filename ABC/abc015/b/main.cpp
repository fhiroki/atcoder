#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0, cnt = 0;
    rep(i, n) {
        int a;
        cin >> a;
        if (a != 0) {
            sum += a;
            cnt++;
        }
    }

    cout << ceil(sum / cnt) << endl;
    return 0;
}
