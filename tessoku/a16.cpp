#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
const Int LINF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
template <class T>
void chmin(T& a, T b) {
  if (a > b) a = b;
}
const int mod = 1'000'000'007;  // mod(10^9 + 7)
using Graph = vector<vector<int>>;

vector<Int> dp(110000, LINF);
Int A[110000], B[110000];

int main() {
  int n;
  cin >> n;
  repp(i, 2, n + 1) cin >> A[i];
  repp(i, 3, n + 1) cin >> B[i];
  dp[1] = 0;
  dp[2] = A[2];
  repp(i, 3, n + 1) {
    if (i - 1 >= 0) chmin(dp[i], dp[i - 1] + A[i]);
    if (i - 2 >= 0) chmin(dp[i], dp[i - 2] + B[i]);
  }
  cout << dp[n] << endl;
  return 0;
}