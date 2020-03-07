#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int count = 0;
    while (true) {
        N /= K;
        if (N < 0) {
            break;
        }
        count++;
    }

    cout << count + 1 << endl;
    return 0;
}

