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
  vector<string> s(n);
  set<string> se;
  rep(i, n) {
    cin >> s[i];
    se.insert(s[i]);
  }
  string s0 = "HDCS";
  bool ans = true;
  rep(i, n) {
    if (!(s[i][0] == 'H' || s[i][0] == 'D' || s[i][0] == 'C' || s[i][0] == 'S'))
      ans = false;
    if (!(s[i][1] == 'A' || s[i][1] == '2' || s[i][1] == '3' ||
          s[i][1] == '4' || s[i][1] == '5' || s[i][1] == '6' ||
          s[i][1] == '7' || s[i][1] == '8' || s[i][1] == '9' ||
          s[i][1] == 'T' || s[i][1] == 'J' || s[i][1] == 'Q' || s[i][1] == 'K'))
      ans = false;
  }
  if (se.size() != n) ans = false;
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}