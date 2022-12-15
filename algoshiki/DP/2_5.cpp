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
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  vector<vector<ll>> dp(n, vector<ll>(n));
  dp[0][0] = 1;
  rep(i, n) rep(j, n) {
    if (i - 1 >= 0 && s[i - 1][j] != '#') dp[i][j] += dp[i - 1][j];
    if (j - 1 >= 0 && s[i][j - 1] != '#') dp[i][j] += dp[i][j - 1];
  }
  cout << dp[n - 1][n - 1] << endl;
  return 0;
}