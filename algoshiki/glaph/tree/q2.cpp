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

// 関数の引数を
// constとして宣言すると、その関数が引数の値を変更しないことを約束する
void rec(int v, const vector<vector<int>>& chs) {
  cout << v << " ";
  // 頂点vの各子頂点を探索
  for (auto ch : chs[v]) {
    rec(ch, chs);
  }
}

int main() {
  int n;
  cin >> n;
  //頂点1, ... の親を受け取る
  Graph chs(n);
  for (int v = 1; v < n; ++v) {
    int p;
    cin >> p;
    // 親pの子頂点リストに頂点vを挿入
    chs[p].push_back(v);
  }
  //頂点(0)から再帰的に探索
  rec(0, chs);
  cout << endl;
  return 0;
}