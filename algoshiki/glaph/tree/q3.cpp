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

// 頂点 v を根とする部分木を探索
// p := 頂点 v の親
// depth[v] := 頂点 v の深さ
// chs[v] := 頂点 v の子頂点のリスト
void rec(int v, int p, vector<int>& depth, const vector<vector<int>>& chs) {
  if (v == 0)
    depth[0] = 0;
  else
    depth[v] = depth[p] + 1;

  for (auto ch : chs[v]) rec(ch, v, depth, chs);
}

int main() {
  int n;
  cin >> n;
  Graph chs(n);
  repp(i, 1, n) {
    int p;
    cin >> p;
    chs[p].push_back(i);
  }
  vector<int> depth(n, 0);
  rec(0, -1, depth, chs);

  for (auto d : depth) cout << d << endl;
  return 0;
}