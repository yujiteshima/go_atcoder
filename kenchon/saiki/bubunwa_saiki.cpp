#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int w, const vector<int> &a) {
  // base case
  if (i == 0) {
    if (w == 0)
      return true;
    else
      return false;
  }
  // a[i - 1] を選ばない場合
  if (func(i - 1, w, a)) return true;
  // a[i - 1] を選ぶ場合
  if (func(i - 1, w - a[i - 1], a)) return true;
  // どちらもfalseの場合はfalse
  return false;
}

int main() {
  // ex, n = 4, a = (3, 2, 6, 5), w = 14
  int n, w;
  cin >> n >> w;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];

  if (func(n, w, a))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}