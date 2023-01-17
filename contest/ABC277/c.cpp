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
  // 頂点 v を黒く塗る (= seen[v] を true に変える)
  seen[v] = true;
  // G[v] に含まれる頂点 v2 について、
  for (auto v2 : G[v]) {
    // v2 がすでに黒く塗られているならば、スキップする
    if (seen[v2]) {
      continue;
    }
    // v2 始点で深さ優先探索を行う (関数を再帰させる)
    rec(v2, G, seen);
  }
  return;
}
int main() {
  int n;
  cin >> n;
  map<int, vector<int>> G;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    vector<int> av;
    av.push_back(b);
    if (G.count(a) == 0) {
      G[a] = av;
    } else {
    }
    G[b].push_back(a);
  }
  rep(i, ) { G[i] }
  return 0;
}