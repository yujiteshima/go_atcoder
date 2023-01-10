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
  ll n, t;
  cin >> n >> t;
  vector<ll> a(n + 1);
  ll max = 0;
  repp(i, 1, n + 1) {
    ll tmp;
    cin >> tmp;
    a[i] = tmp;
    max += tmp;
  }
  vector<ll> dp(n + 10);
  dp[0] = 0;
  t = t % max;
  // cout << "t: " << t << endl;
  repp(i, 1, n + 1) {
    dp[i] = dp[i - 1] + a[i];
    // cout << dp[i] << endl;
    if (dp[i] >= t) {
      cout << i << " " << t - dp[i - 1] << endl;
      break;
    }
  }
  return 0;
}