#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    float c = stoi(a + b);

    if (sqrt(c) == floor(sqrt(c)))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
