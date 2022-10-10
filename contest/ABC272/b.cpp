#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
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
  vector<vector<int>> v(m);
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    for (int j = 0; j < k; j++) {
      int input;
      cin >> input;
      v[i].push_back(input);
    }
  }
  bool ans = true;
  for (int i = 1; i < n; i++) {
    for (int j = 1 + i; j <= n; j++) {
      bool ok_1 = false, ok_2 = false;
      for (auto k : v) {
        ok_1 = find(k.begin(), k.end(), i) != k.end();

        ok_2 = find(k.begin(), k.end(), j) != k.end();
        if (ok_1 && ok_2) {
          break;
        }
      }
      if (!ok_1 || !ok_2) {
        ans = false;
      }
    }
  }
  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}