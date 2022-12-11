#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
const int mod = 1'000'000'007;  // mod(10^9 + 7)
using Graph = vector<vector<int>>;
template <class T>
void chmin(T& a, T b) {
  if (a > b) a = b;
}
template <class T>
void chmax(T& a, T b) {
  if (a < b) a = b;
}
template <class T>
T calc_dist(T x1, T y1, T x2, T y2) {
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}
#define ALL(a) (a).begin(), (a).end()

int main() {
  int n;
  cin >> n;
  vector<int> dp(n + 10);
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;
  repp(i, 3, n + 1) {
    // repp(i, 1, n + 1) {
    dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    // if (i - 1 >= 0) dp[i] += dp[i - 1];
    // if (i - 2 >= 0) dp[i] += dp[i - 2];
    // if (i - 3 >= 0) dp[i] += dp[i - 3];
  }
  cout << dp[n] << endl;
  return 0;
}