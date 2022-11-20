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
//マスを表すデータ構造
using Node = pair<int, int>;
// 四方向への移動を表すベクトル
// 0: 下,1: 右, 2: 上, 3: 左
vector<int> dxs = {1, 0, -1, 0};
vector<int> dys = {0, 1, 0, -1};

int main() {
  int h, w, x0, y0, x1, y1;
  cin >> h >> w >> x0 >> y0 >> x1 >> y1;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  // 各マス(x, y)が何手目に探索されたか
  // -1は「まだ探索されたいない」ことを表す
  vector<vector<int>> dist(h, vector<int>(w, -1));
  // todo list
  queue<Node> que;
  //マス(x0, y0)を始点とする
  dist[x0][y0] = 0;
  que.push(Node(x0, y0));

  // キューが空になるまで探索する
  while (!que.empty()) {
    // キューから頂点を取り出す
    Node a = que.front();
    int x = a.first;
    int y = a.second;
    que.pop();
  }
  return 0;
}