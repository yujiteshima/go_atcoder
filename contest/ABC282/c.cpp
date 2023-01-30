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
  int n;
  cin >> n;
  string s;
  cin >> s;
  string ans = "";
  bool isKu = false;
  rep(i, s.size()) {
    if (s[i] == '"') {
      if (!isKu)
        isKu = true;
      else
        isKu = false;
      ans.push_back('"');
    } else if (s[i] == ',') {
      if (isKu) {
        ans.push_back(',');
      } else {
        ans.push_back('.');
      }
    } else {
      ans.push_back(s[i]);
    }
  }
  cout << ans << endl;
  return 0;
}