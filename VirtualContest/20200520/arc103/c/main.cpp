#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

const int MAX = 100005;
int even[MAX], odd[MAX];

int main() {
    int n;
    cin >> n;

    rep(i, n) {
        int x;
        cin >> x;
        if (i % 2 == 0) {
            even[x]++;
        } else {
            odd[x]++;
        }
    }

    int evenMax = 0, oddMax = 0, ei, oi;
    for (int i = 0; i < MAX; i++) {
        if (evenMax < even[i]) evenMax = even[i], ei = i;
        if (oddMax < odd[i]) oddMax = odd[i], oi = i;
    }

    sort(even, even + MAX, greater<int>());
    sort(odd, odd + MAX, greater<int>());

    if (ei == oi)
        cout << min(n - even[0] - odd[1], n - even[1] - odd[0]) << endl;
    else
        cout << n - even[0] - odd[0] << endl;

    return 0;
}
