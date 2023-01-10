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
#define ALL(a) (a).begin(), (a).end()

int main() {
  int n, k, d;
  cin >> n >> k >> d;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  int N = sizeof(a) / sizeof(int);

  // K 個の項の和として考えられる非負整数の集合を求める
  set<int> S;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      S.insert(a[i] + a[j]);
    }
  }

  // D の倍数の最大値を求める
  int max_multiple = -1;
  for (int s : S) {
    if (s % d == 0) {
      max_multiple = max(max_multiple, s);
    }
  }

  // 最大値を出力する
  cout << max_multiple << endl;

  return 0;
}
