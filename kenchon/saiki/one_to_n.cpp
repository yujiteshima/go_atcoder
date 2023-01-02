#include<iostream>
using namespace std;

int func(int n) {
    //base case
    if (n == 0) return 0;
    int result = n + func(n - 1);
    return result;
}

int main () {
    int n;
    cin >> n;
    int ans = func(n);
    cout << ans << endl;
}