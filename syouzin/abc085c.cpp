#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
const int mod = 1'000'000'007;  // mod(10^9 + 7)
using Graph = vector<vector<int>>;

int main() {
  int n, y;
  cin >> n >> y;
  int a = -1;
  int b = -1;
  int c = -1;

  repp(i, 0, n + 1) {
    repp(j, 0, n + 1) {
      if (n - i - j < 0) continue;
      if ((i * 10000 + j * 5000 + (n - i - j) * 1000) == y) {
        a = i;
        b = j;
        c = n - i - j;
      }
    }
  }
  cout << a << " " << b << " " << c << endl;
  return 0;
}