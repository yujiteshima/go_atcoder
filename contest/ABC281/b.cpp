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
  string s;
  cin >> s;
  bool isSand = true;
  if (s.size() != 8) isSand = false;
  // 0 なら数値以外
  if (isdigit(s[0]) != 0) isSand = false;
  if (isdigit(s[7]) != 0) isSand = false;
  repp(i, 1, 7) {
    if (isdigit(s[i]) == 0) isSand = false;
  }
  if (isdigit(s[1]) != 0) {
    int a = s[1] - '0';
    if (a == 0) isSand = false;
  }
  cout << (isSand ? "Yes" : "No") << endl;
  return 0;
}