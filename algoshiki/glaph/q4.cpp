#include <bits/stdc++.h>

// #include <atcoder/all>
using namespace std;
// using mint = atcoder::modint1000000007;
// using mint2 = atcoder::modint998244353;
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

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  Graph g(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  set<int> friends;
  for (auto v : g[x]) friends.insert(v);
  set<int> result;
  for (auto v : g[x]) {
    for (auto w : g[v]) {
      if (w != x && !friends.count(w)) {
        result.insert(w);
      }
    }
  }
  cout << result.size() << endl;
  return 0;
}