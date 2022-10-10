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
  ll max_value = -1;
  int n;
  cin >> n;
  vector<ll> a, b;
  rep(i, n) {
    int tmp;
    cin >> tmp;
    if (tmp % 2 == 0) {
      a.push_back(tmp);
    } else {
      b.push_back(tmp);
    }
  };
  sort(a.begin(), a.end(), greater<int>());
  sort(b.begin(), b.end(), greater<int>());
  // rep(i, a.size()) { cout << a[i] << " "; }
  // cout << endl;

  if (a.size() >= 2 && b.size() >= 2) {
    ll maxA = a[0] + a[1];
    ll maxB = b[0] + b[1];
    if (maxA >= maxB) {
      cout << maxA << endl;
    } else {
      cout << maxB << endl;
    }
  } else if (a.size() >= 2) {
    cout << a[0] + a[1] << endl;
  } else if (b.size() >= 2) {
    cout << b[0] + b[1] << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}