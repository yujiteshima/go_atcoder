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
  int a, b, k;
  cin >> a >> b >> k;
  if (b - a >= 2 * k) {
    for (ll i = a; i < a + k; ++i) cout << i << endl;
    for (ll i = b - k + 1; i <= b; ++i) cout << i << endl;
  } else {
    for (ll i = a; i <= b; ++i) cout << i << endl;
  }
  return 0;
}