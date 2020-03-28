#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int a[1000000];
    cin >> a[0];

    int i = 0;
    bool find = false;
    while (!find) {
        if (a[i] % 2 == 0) a[i+1] = a[i]/2;
        else a[i+1] = 3*a[i]+1;
        rep(j, i) {
            if (a[i+1] == a[j]) {
                cout << i+2 << endl;
                find = true;
                break;
            }
        }
        i++;
    }

    return 0;
}
