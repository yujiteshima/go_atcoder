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
  vector<int> height(n);
  rep(i, n) {
    int h;
    cin >> h;
    height[i] = h;
  }
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  int goodTenboudai = 0;
  rep(i, n) {
    if (G[i].empty()) {
      goodTenboudai++;
      continue;
    }
    sort(G[i].begin(), G[i].end(), greater<int>());
    if (G[i][0] < height[i]) goodTenboudai++;
  }
  cout << goodTenboudai << endl;
  return 0;
}