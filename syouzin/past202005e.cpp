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
  int n, m, q;
  cin >> n >> m >> q;
  // 頂点数nのグラフGを定義
  Graph G(n);
  // M本の辺を順に受け取る
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    // 頂点番号を0始まりにする
    --u, --v;
    // グラフに辺を追加
    G[u].push_back(v);
    G[v].push_back(u);
  }
  // 初期状態の各頂点の色
  vector<int> col(n);
  for (auto& coli : col) {
    cin >> coli;
  }

  // 各クエリに答える
  rep(i, q) {
    int t, x;
    cin >> t >> x;
    // 頂点番号を0始まりにする
    --x;

    // 頂点xの色を出力
    cout << col[x] << endl;
    // タイプ1の場合
    if (t == 1) {
      // 頂点xに隣接する各頂点vの色を更新
      for (auto v : G[x]) {
        col[v] = col[x];
      }
    }
    // タイプ2の場合
    else {
      int y;
      cin >> y;
      // 頂点xの色をyに更新
      col[x] = y;
    }
  }

  return 0;
}