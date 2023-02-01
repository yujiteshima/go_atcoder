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
  int n, M;
  cin >> n >> M;
  Graph g(n);
  for (int i = 1; i <= M; ++i) {
    int A, B;
    cin >> A >> B;
    --A;
    --B;
    // 頂点 A から頂点 B への辺を張る
    g[A].push_back(B);
    g[B].push_back(A);
  }
  rep(i, n) {
    sort(g[i].begin(), g[i].end());
    cout << g[i].size();
    if (g[i].size() != 0) {
      rep(j, g[i].size()) { cout << " " << g[i][j] + 1; }
    }
    cout << endl;
  }
  return 0;
}