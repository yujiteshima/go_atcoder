#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
// using namespace atcoder;
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

int main() {
  vector<int> a = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
  int q;
  cin >> q;
  rep(i, q) {
    int t, k;
    cin >> t;
    if (t == 0) {
      cin >> k;
      cout << a[k] << endl;
    } else {
      int v;
      cin >> k >> v;
      a[k] = v;
    }
  }
  return 0;
}