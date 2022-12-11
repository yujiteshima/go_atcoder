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
  vector<int> d(m);
  rep(i, m) cin >> d[i];
  vector<bool> dp(n + 10, false);
  dp[0] = true;
  repp(i, 1, n + 1) {
    repp(j, 0, m) {
      if (i - d[j] >= 0) {
        if (dp[i - d[j]]) dp[i] = true;
      }
    }
  }
  cout << (dp[n] ? "Yes" : "No") << endl;
  return 0;
}