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

void rec(int v, int p, vector<int>& depth, const vector<vector<int>>& chs) {
  //頂点vの深さを求める
  if (v == 0) {
    // 根の場合
    depth[v] = 0;
  } else {
    //根以外の場合は親頂点の深さ+1
    depth[v] = depth[p] + 1;
  }
  //頂点vの各子頂点を探索
  for (auto ch : chs[v]) {
    // 子頂点chを根として部分木を再帰的に探索
    // 子頂点chの親はvである
    rec(ch, v, depth, chs);
  }
}

int main() {
  // 頂点数の入力
  int n;
  cin >> n;
  // 頂点1, 2, 3, ... の親を受け取る
  vector<vector<int>> chs(n);  // 頂点vの子頂点
  for (int v = 1; v < n; ++v) {
    int p;
    cin >> p;
    // 親pの子頂点リストに頂点vを挿入
    chs[p].push_back(v);
  }
  // 根頂点(0)から再帰的に探索する
  // 根頂点(0)の親は便宜的に-1とする
  vector<int> depth(n, 0);
  rec(0, -1, depth, chs);
  // 深さの最大値を求める
  int res = 0;
  for (int d : depth) {
    res = max(res, d);
  }
  cout << res << endl;
  return 0;
}