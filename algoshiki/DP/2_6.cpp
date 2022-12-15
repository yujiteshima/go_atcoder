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
void array2D(const std::vector<std::vector<ll>>& array_2d) {
  for (int i = 0; i < array_2d.size(); ++i) {
    for (int j = 0; j < array_2d[i].size(); ++j) {
      //配列の中身を出力
      std::cout << array_2d[i][j] << ',';
    }
    //改行
    std::cout << std::endl;
  }
}
int main() {
  int n;
  cin >> n;
  vector<vector<ll>> a(n, vector<ll>(n));
  rep(i, n) rep(j, n) cin >> a[i][j];
  vector<vector<ll>> dp(n, vector<ll>(n));
  dp[0][0] = a[0][0];
  rep(i, n) rep(j, n) {
    if (i - 1 >= 0) dp[i][j] = max(dp[i][j], a[i][j] + dp[i - 1][j]);
    if (j - 1 >= 0) dp[i][j] = max(dp[i][j], a[i][j] + dp[i][j - 1]);
  }
  cout << dp[n - 1][n - 1] << endl;
  return 0;
}