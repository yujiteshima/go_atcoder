#include <bits/stdc++.h>
using namespace std;

vector<long long> memo;

long long fib(int n) {
  if (n == 0) return 0;
  else if(n == 1) return 1;

  if (memo[n] != -1) return memo[n];
  return memo[n] = fib(n - 1) + fib(n - 2);
}

int main() {
  memo.assign(100, -1);
  int a;
  cin >> a;
  long long ans = fib(a);
  cout << ans << endl;
}
