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
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) { cin >> a[i]; }
  int q;
  cin >> q;
  rep(i, q) {
    int type;
    cin >> type;
    if (type == 1) {
      int tmp;
      cin >> tmp;
      a.clear();
      a.assign(n, tmp);
    } else if (type == 2) {
      int idx, value;
      cin >> idx >> value;
      --idx;
      a[idx] += value;
    } else if (type == 3) {
      int idx;
      cin >> idx;
      --idx;
      cout << a[idx] << endl;
    }
  }
  return 0;
}