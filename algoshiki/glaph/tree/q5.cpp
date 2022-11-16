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

void rec(int v, int p, vector<int>& siz, const vector<vector<int>>& chs) {
  for (auto ch : chs[v]) {
    rec(ch, v, siz, chs);
  }
  // 帰りがけ時に答えを合算する(再帰から抜けるタイミング)
  siz[v] = 1;
  for (auto ch : chs[v]) {
    siz[v] += siz[ch];
  }
}

int main() {
  // 頂点数入力
  int n;
  cin >> n;
  Graph chs(n);
  repp(i, 1, n) {
    int p;
    cin >> p;
    chs[p].push_back(i);
  }

  // 根頂点0から再帰的に探索する
  // 根頂点0の親は便宜上-1とする
  vector<int> siz(n, 0);
  rec(0, -1, siz, chs);
  // output
  for (auto s : siz) cout << s - 1 << endl;

  return 0;
}