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
  vector<vector<ll>> A(n, vector<ll>(3));
  rep(i, n) rep(j, 3) cin >> A[i][j];
  vector<vector<ll>> dp(n, vector<ll>(3));
  // dp[0][0] = A[0][0], dp[0][1] = A[0][1], dp[0][2] = A[0][2];
  rep(i, 3) dp[0][i] = A[0][i];

  repp(i, 1, n) {
    dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + A[i][0];
    dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + A[i][1];
    dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + A[i][2];
  }
  cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << endl;
  return 0;
}