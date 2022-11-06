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
  // input
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  // 存在するかの確認
  bool flg = false;
  rep(i, n) repp(j, i + 1, n) repp(k, j + 1, n) {
    if (a[i] + a[j] + a[k] == 1000) flg = true;
  }
  cout << (flg ? "Yes" : "No") << endl;
  return 0;
}