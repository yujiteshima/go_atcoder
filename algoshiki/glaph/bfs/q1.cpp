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
  vector<int> dist(n, -1);
  vector<vector<int>> nodes(n);
  dist[0] = 0;
  nodes[0] = {0};
  repp(k, 1, n) {
    for (auto v : nodes[k - 1]) {
      for (auto next_v : G[v]) {
        if (dist[next_v] != -1) {
          continue;
        }
        dist[next_v] = dist[v] + 1;
        nodes[k].push_back(next_v);
      }
    }
  }

  for (int k = 0; k < n; ++k) {
    sort(nodes[k].begin(), nodes[k].end());
    for (auto v : nodes[k]) {
      cout << v << " ";
    }
    cout << endl;
  }
  return 0;
}