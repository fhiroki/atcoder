#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int N, n;
    cin >> N;

    int ans = 0;
    n = N;
    while (n) {
        ans += n % 10;
        n /= 10;
    }

    if (N % ans == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
