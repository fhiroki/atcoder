#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, K;
    cin >> A >> B >> K;

    int ans = 0;
    int rank = 0;
    for (int i = 100; i >= 1; i--) {
        if (A%i==0 & B%i==0) rank++;
        if (rank==K) { ans = i; break; }
    }

    cout << ans << endl;
	return 0;
}

