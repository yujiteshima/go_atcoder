#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)

int main () {
    int a, b; cin >> a >> b;
    cout << ((a * b) % 2 == 0 ? "Even" : "Odd") << endl;
}