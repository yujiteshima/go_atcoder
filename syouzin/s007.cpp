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

bool isNum(char c) {
  if ('0' <= c && c <= '9') {
    return true;
  } else {
    return false;
  }
}

int main() {
  string s;
  cin >> s;
  map<char, ll> mp;
  vector<string> a;
  ll bc = 0;
  rep(i, s.size()) {
    if (s[i] == '(') {
      bc++;
    } else if (s[i] == ')') {
      bc--;
    } else if (isNum(s[i])) {
      a[]
    }
  }
  return 0;
}