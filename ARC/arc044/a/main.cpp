#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

bool isPrime(int n) {
    if (n == 1)
        return false;
    else if (n == 2)
        return true;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "Not Prime" << endl;
        return 0;
    }

    if (isPrime(n)) {
        cout << "Prime" << endl;
    } else {
        int sum = 0;
        int t = n % 10;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        if (t % 2 != 0 && t != 5 && sum % 3 != 0) {
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }
    }

    return 0;
}
