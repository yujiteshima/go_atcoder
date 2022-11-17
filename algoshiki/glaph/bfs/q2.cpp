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
  Graph G(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  // 各頂点が何手目に探索されたか
  // -1はまだ探索されていないことを表す。
  vector<int> dist(n, -1);
  // todoリストを表すqueue
  queue<int> que;

  // 頂点0を始点とする
  dist[0] = 0;
  que.push(0);
  // queが空になるまで探索する。
  while (!que.empty()) {
    //キューから頂点を取り出す
    int v = que.front();
    que.pop();
    //頂点vから1手で行ける頂点next_vを探索
    for (auto next_v : G[v]) {
      if (dist[next_v] != -1) {
        continue;
      }
      //頂点next_vを探索する
      dist[next_v] = dist[v] + 1;
      que.push(next_v);
    }
  }
  // distの最大値を答える
  int result = 0;
  for (int v = 1; v < n; ++v) result = max(result, dist[v]);
  cout << result << endl;
  return 0;
}