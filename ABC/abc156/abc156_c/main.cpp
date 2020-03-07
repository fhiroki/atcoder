#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> X(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    int max = *max_element(X.begin(), X.end());

    int hp_min = 100000000;
    for (int i = 1; i <= max; i++) {
        int hp = 0;
        for (int j = 0; j < N; j++) {
            hp += pow(X[j] - i, 2);
        }

        if (hp < hp_min) {
            hp_min = hp;
        }
    }

    cout << hp_min << endl;
    return 0;
}

