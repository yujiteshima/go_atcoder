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

// 1 以上 N 以下の整数が素数かどうかを返す
vector<bool> Eratosthenes(int N) {
  // テーブル
  vector<bool> isprime(N + 1, true);

  // 0, 1 は予めふるい落としておく
  isprime[0] = isprime[1] = false;

  // ふるい
  for (int p = 2; p <= N; ++p) {
    // すでに合成数であるものはスキップする
    if (!isprime[p]) continue;

    // p 以外の p の倍数から素数ラベルを剥奪
    for (int q = p * 2; q <= N; q += p) {
      isprime[q] = false;
    }
  }

  // 1 以上 N 以下の整数が素数かどうか
  return isprime;
}

int main() {
  int n;
  cin >> n;
  vector<bool> isprime = Eratosthenes(n);
  ll ans = 0;
  rep(i, isprime.size()) {
    if (isprime[i]) ++ans;
  }
  cout << ans << endl;
  return 0;
}