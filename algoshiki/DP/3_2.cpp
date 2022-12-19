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
void array2D(const std::vector<std::vector<bool>>& array_2d) {
  for (int i = 0; i < array_2d.size(); ++i) {
    for (int j = 0; j < array_2d[i].size(); ++j) {
      //配列の中身を出力
      std::cout << array_2d[i][j] << ',';
    }
    //改行
    std::cout << std::endl;
  }
}
// 1,0,0,0,0,
// 1,1,0,0,0,
// 1,1,0,1,0,
// 1,1,0,1,0,

// 1,0,0,0,0,
// 1,1,0,0,0,
// 1,1,1,1,0,
// 1,1,1,1,1,

int main() {
  int n, m;
  cin >> n >> m;
  vector<ll> W(n);
  rep(i, n) cin >> W[i];
  vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
  dp[0][0] = true;

  rep(i, n) rep(j, m + 1) {
    if (!dp[i][j]) continue;

    dp[i + 1][j] = true;

    if (j + W[i] <= m) dp[i + 1][j + W[i]] = true;
  }
  // array2D(dp);
  //  cout << (dp[n][m] ? "Yes" : "No") << endl;
  if (dp[n][m])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
