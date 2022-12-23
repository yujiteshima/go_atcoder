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
  int n, m;
  cin >> n >> m;
  vector<int> W(n);
  rep(i, n) cin >> W[i];
  vector<int> V(n);
  rep(i, n) cin >> V[i];
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
  dp[0][0] = 0;
  rep(i, n) rep(j, m + 1) {
    if (dp[i][j] < 0) continue;
    dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
    if (j + W[i] <= m) {
      dp[i + 1][j + W[i]] = max(dp[i + 1][j + W[i]], dp[i][j] + V[i]);
    }
  }
  int ans = -1;
  rep(i, m + 1) {
    if (ans < dp[n][i]) ans = dp[n][i];
  }
  cout << ans << endl;
  return 0;
}