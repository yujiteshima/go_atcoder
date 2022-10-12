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

int main() {
  int n, k;
  cin >> n >> k;
  vector<ll> h(n);
  rep(i, n) cin >> h[i];
  sort(h.begin(), h.end(), greater<int>());
  ll ans = INF;
  rep(i, n - k + 1) {
    // cout << h[i] << " " << h[i + k - 1] << endl;
    ll sa = h[i] - h[i + k - 1];
    // cout << sa << " " << ans << endl;
    if (sa <= ans) ans = sa;
  }
  cout << ans << endl;
  return 0;
}