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
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  rep(i, h) rep(j, w) {
    int tmp;
    cin >> tmp;
    a[i][j] = tmp;
  }
  int q;
  cin >> q;
  vector<int> A(q), B(q), C(q), D(q);
  rep(i, q) cin >> A[i] >> B[i] >> C[i] >> D[i];

  vector<vector<int>> z(h, vector<int>(w));
  // 横方向に累積和をとる
  rep(i, h) rep(j, w) {
    if (j - 1 >= 0)
      z[i][j] = z[i][j - 1] + a[i][j];
    else
      z[i][j] = a[i][j];
  }
  // 縦方向に累積和をとる
  rep(j, w) rep(i, w) {
    if (i - 1 >= 0) z[i][j] = z[i - 1][j] + z[i][j];
  }
  // 答えを求める
  rep(i, q) {
    cout << z[C[i]][D[i]] + z[A[i] - 1][B[i] - 1] - z[A[i] - 1][D[i]] -
                z[C[i]][B[i] - 1]
         << endl;
  }
  return 0;
}