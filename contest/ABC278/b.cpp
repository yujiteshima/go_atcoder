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

template <typename T>
void vec_out(vector<T> v, char c) {
  rep(i, v.size() - 1) cout << v.at(i) << c;
  cout << v.at(v.size() - 1) << endl;
}
template <typename T>
void vec_out(vector<T> v) {
  vec_out(v, ' ');
}

vector<int> solve(int h, int m) {
  while (true) {
    int low_h = (h / 10) * 10 + (m / 10);
    int low_m = (h % 10) * 10 + (m % 10);
    if ((0 <= low_h) and (low_h <= 23) and (0 <= low_m) and (low_m <= 59)) {
      vector<int> res = {h, m};
      return res;
    }
    m++;
    if (m >= 60) {
      h++;
      m -= 60;
    }
    if (h >= 24) {
      h -= 24;
    }
  }
}

int main(void) {
  int h, m;
  cin >> h >> m;

  vec_out(solve(h, m));

  return 0;
}