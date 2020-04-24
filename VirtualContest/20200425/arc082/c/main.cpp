#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int a[100001];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n * 3; i += 3) {
        int b;
        cin >> b;
        a[b - 1]++, a[b]++, a[b + 1]++;
    }

    cout << *max_element(a, a + 100001) << endl;
    return 0;
}
