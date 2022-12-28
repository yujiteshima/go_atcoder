#include <iostream>
#include <vector>
using namespace std;

// フォボナッチ数列
// F0 = 0;
// F1 = 1;
// Fn = Fn-1 + Fn-2 (n = 2, 3, ...)
vector<long long> memo(10000000, -1);

long long fibo(int n) {
  // base case
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  cout << "check " << n << endl;
  // check memo
  if (memo[n] != -1) {
    cout << "memozumi: " << memo[n] << endl;
    return memo[n];
  }
  return memo[n] = fibo(n - 1) + fibo(n - 2);
}

int main() {
  int n;
  cin >> n;
  fibo(n);
  for (int i = 0; i < n; ++i) {
    cout << memo[i] << endl;
  }
  return 0;
}