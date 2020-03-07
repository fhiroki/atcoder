#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt_digits(ll N) { return to_string(N).length(); }

int main() {
  ll N;
  cin >> N;

  int ans = cnt_digits(N);
  for (ll A = 1LL; A * A <= N; A++) {
    if (N % A != 0) continue;
    const ll B = N / A;
    const int cur = max(cnt_digits(A), cnt_digits(B));
    if (ans > cur) ans = cur;
  }

  cout << ans << endl;

  return 0;
}
