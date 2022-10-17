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

bool solve() {
  int n;
  cin >> n;
  // previous value
  int pt = 0, px = 0, py = 0;

  rep(i, n) {
    int t, x, y;
    cin >> t >> x >> y;
    int T = t - pt, X = abs(x - px), Y = abs(y - py);
    // 間に合わないケース
    if (T < X + Y) return false;
    // パリティが合わない時は不可
    if (T % 2 != (X + Y) % 2) return false;
    // previous valueを更新
    pt = t, px = x, py = y;
  }
  // 最後まで到達
  return true;
}

int main() {
  if (solve()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}