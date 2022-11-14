#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  vector<string> G(n);
  for (auto& str : G) cin >> str;
  if (G[a][b] == 'o')
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
