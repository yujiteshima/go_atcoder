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
  int h, w;
  cin >> h >> w;
  vector<string> s(w);
  vector<string> t(w);
  rep(i, h) {
    string tmp;
    cin >> tmp;
    rep(j, w) { s[j].push_back(tmp[j]); }
  }
  rep(i, h) {
    string tmp;
    cin >> tmp;
    rep(j, w) { t[j].push_back(tmp[j]); }
  }
  multiset<string> ss;
  multiset<string> ts;
  rep(i, w) {
    ss.insert(s[i]);
    ts.insert(t[i]);
  }
  vector<string> s1s2_intsec;
  set_intersection(ss.begin(), ss.end(), ts.begin(), ts.end(),
                   std::back_inserter(s1s2_intsec));
  // cout << ss.size() << endl;
  // cout << "s1s2_intsec:" << s1s2_intsec.size() << endl;
  if (ss.size() == s1s2_intsec.size()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}