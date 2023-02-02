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
  vector<string> s(9);
  rep(i, 9) cin >> s[i];
  // vector<pair<int, int>> p;

  // rep(i,9)rep(j,9){
  //   if(s[i][j] == '#') p.push_back({i, j});
  // }
  int ans = 0;

  rep(i, 9) {
    rep(j, 9) {
      if (s[i][j] == '#') {
        repp(k, 1, 9) {
          if (j + k < 9 && i + k < 9) {
            if (s[i][j + k] == '#' && s[i + k][k] == '#' &&
                s[i + k][j + k] == '#') {
              cout << "asn: " << i << " " << j << endl;
              ++ans;
            }
          }
        }
        repp(k, -9, 0) {
          if (j + k > 9 && i + k > 9) {
            if (s[i][j + k] == '#' && s[i + k][k] == '#' &&
                s[i + k][j + k] == '#') {
              cout << "asn: " << i << " " << j << endl;
              ++ans;
            }
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}