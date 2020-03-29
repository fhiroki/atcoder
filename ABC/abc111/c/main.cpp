#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    const int MAX = 100005;
    int even[MAX] = {0}, odd[MAX] = {0};

    rep(i, n) {
        int x;
        cin >> x;
        if (i % 2 == 0)
            even[x]++;
        else
            odd[x]++;
    }

    int emax = 0, omax = 0, ei, oi;
    for (int i = 0; i < MAX; i++) {
        if (emax < even[i]) emax = even[i], ei = i;
        if (omax < odd[i]) omax = odd[i], oi = i;
    }

    sort(even, even + MAX, greater<int>());
    sort(odd, odd + MAX, greater<int>());

    if (ei == oi)
        cout << min(n - even[0] - odd[1], n - even[1] - odd[0]) << endl;
    else
        cout << n - even[0] - odd[0] << endl;

    return 0;
}
