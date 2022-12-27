#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long Int;
const Int INF = 1LL << 60;
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

Int n;
vector<Int> h;
vector<Int> dp;

Int rec(Int i) {
  if (dp[i] < INF) return dp[i];
  // base case 足場0のコストは0
  if (i == 0) return 0;
  Int res = INF;
  // 足場i-1から来た場合
  chmin(res, rec(i - 1) + abs(h[i] - h[i - 1]));
  // 足場i-2から来た場合
  chmin(res, rec(i - 2) + abs(h[i] - h[i - 2]));
  return dp[i] = res;
}

int main() {
  cin >> n;
  h.resize(n);
  rep(i, n) cin >> h[i];
  dp.assign(n, INF);
  cout << rec(n - 1) << endl;
  return 0;
}