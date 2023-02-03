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
void vec_in(vector<T>& v) {
  rep(i, v.size()) cin >> v.at(i);
}
int ct = 0;
int bs = 0;
int qidx;
bool is_first = true;
vector<int> a;

void solve() {
  map<int, long> ads;

  while (ct < qidx) {
    int q, i, x;
    cin >> q >> i;
    ct++;

    switch (q) {
      case 1:
        is_first = false;
        bs = i;
        return;
      case 2:
        cin >> x;
        if (ads.count(i)) {
          ads[i] += x;
        } else {
          ads[i] = x;
        }
        break;
      case 3:
        long res = (is_first ? a.at(i - 1) : bs);
        if (ads.count(i)) {
          res += ads[i];
        }
        cout << res << endl;
        break;
    }
  }

  return;
}

int main(void) {
  int n;
  cin >> n;

  a = vector<int>(n);
  vec_in(a);

  bool is_first = true;

  cin >> qidx;
  while (ct < qidx) {
    solve();
  }
  return 0;
}