#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using mint = atcoder::modint1000000007;
using mint2 = atcoder::modint998244353;
using Int = long long;
using Real = long double;
using CP = complex<Real>;
using P = pair<Int, Int>;

const Int MOD = 1'000'000'007;  // mod(10^9 + 7)
const Int MOD2 = 998244353;
const Int LINF = (1LL << 60);
const int INF = 1'000'000'007;
const Real EPS = 1e-10;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
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
//
int main() {
  // input
  int n;
  cin >> n;
  vector<int> h(n + 9);
  vector<int> dp(n + 9, INF);
  rep(i, n) cin >> h[i];
  dp[0] = 0;
  repp(i, 0, n) {
    if (i - 1 >= 0) chmin(dp[i], dp[i - 1] + abs(h[i - 1] - h[i]));
    if (i - 2 >= 0) chmin(dp[i], dp[i - 2] + abs(h[i - 2] - h[i]));
  }
  cout << dp[n - 1] << endl;
  return 0;
}