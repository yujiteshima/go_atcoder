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
  int n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> vec;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    vec.push_back({a, b});
  }
  sort(vec.begin(), vec.end());
  ll ans = 0;
  rep(i, n) {
    if (m >= vec[i].second) {
      ans += vec[i].first * vec[i].second;
      m -= vec[i].second;
    } else {
      ans += vec[i].first * m;
      m -= m;
    }
    if (m == 0) break;
  }
  cout << ans << endl;
  return 0;
}