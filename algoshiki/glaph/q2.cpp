#include <bits/stdc++.h>

using namespace std;

// グラフを表すデータ構造
using Graph = vector<vector<int>>;

int main() {
  // 入力
  int N, M;
  cin >> N >> M;
  Graph G(N);
  for (int i = 0; i < M; ++i) {
    int A, B;
    cin >> A >> B;

    // 頂点 A から頂点 B への辺を張る
    G[A].push_back(B);
  }

  // 頂点 v ごとに、終点頂点を番号順にして出力
  for (int v = 0; v < N; ++v) {
    // 番号順に
    sort(G[v].begin(), G[v].end());

    // 頂点 v の隣接リストの頂点を順に出力
    for (auto to : G[v]) cout << to << " ";
    cout << endl;
  }
  return 0;
}