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

vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};
// マス (x, y) がグリッド内のマスであるかを判定する
bool isvalid(int x, int y, int H, int W) {
  if (0 <= x && x < H && 0 <= y && y < W) {
    return true;
  } else {
    return false;
  }
}

int getnum(int i, int j, int h, int w) { return (i * w + j); }

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> grid(h, vector<int>(w, 0));
  rep(i, h) {
    string s;
    cin >> s;
    rep(j, w) {
      if (s[j] == '#')
        grid[i][j] = 1;
      else if (s[j] == '.')
        grid[i][j] = 0;
    }
  }

  Graph G(h * w);
  // グリッドの情報からグラフを作る
  rep(i, h) {
    rep(j, w) {
      if (grid[i][j] == 0) continue;
      int v = getnum(i, j, h, w);  // マスi, jに対応する頂点番号
      // cout << v << " ";
      rep(d, 4) {
        int nx = i + dx[d], ny = j + dy[d];
        if (isvalid(nx, ny, h, w)) {
          if (grid[nx][ny] == 0) continue;

          int nv = getnum(nx, ny, h, w);
          G[v].push_back(nv);
        }
      }
    }
  }

  return 0;
}