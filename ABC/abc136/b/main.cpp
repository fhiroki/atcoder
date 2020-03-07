#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        int digit = to_string(i).length();
        if (digit%2 == 1) ans++;
    }

    cout << ans << endl;
	return 0;
}

