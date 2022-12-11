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
  int a0, a1, a2, a3;
  cin >> a0 >> a1 >> a2 >> a3;
  vector<vector<int>> dp(4, vector<int>(4));
  dp[0][0] = a0;
  dp[0][1] = a1;
  dp[0][2] = a2;
  dp[0][3] = a3;
  repp(i, 1, 4) repp(j, 0, 4) {
    if (i - 1 >= 0 && j - 1 >= 0) dp[i][j] += dp[i - 1][j - 1];
    if (i - 1 >= 0) dp[i][j] += dp[i - 1][j];
    if (i - 1 >= 0 && j + 1 <= 3) dp[i][j] += dp[i - 1][j + 1];
  }
  cout << dp[3][3] << endl;
  return 0;
}