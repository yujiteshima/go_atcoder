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

void rec(int v, vector<vector<int>>& G, vector<bool>& seen) {
  seen[v] = true;
  for (auto v2 : G[v]) {
    if (seen[v2]) continue;
    rec(v2, G, seen);
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> G(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
  }
  vector<bool> seen(n, false);
  rec(0, G, seen);
  int count = 0;
  rep(i, n) if (seen[i])++ count;
  cout << n - count << endl;
  return 0;
}