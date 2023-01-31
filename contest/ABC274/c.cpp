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
  ll n;
  cin >> n;
  map<int, int> aa;
  aa.insert({1, 1});
  repp(i, 0, n) {
    ll temp;
    cin >> temp;
    aa.insert({temp * 2, ++aa[temp]});
    aa.insert({temp * 2 + 1, ++aa[temp]});
  }
  for (const auto& item : aa) {
    cout << item.second << endl;
  }
  return 0;
}