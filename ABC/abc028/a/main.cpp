#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 60)
        cout << "Bad" << endl;
    else if (n < 90)
        cout << "Good" << endl;
    else if (n < 100)
        cout << "Great" << endl;
    else
        cout << "Perfect" << endl;
    return 0;
}
