#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    int h = n / (60 * 60);
    n -= h * 60 * 60;
    int m = n / 60;
    n -= m * 60;
    int s = n;

    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}
