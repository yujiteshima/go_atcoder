#include <iostream>
#include <vector>
using namespace std;
// 1<=N<=100
// 0<=A<=1000
/**
 * 挿入ソート
 * O(n^2): データが降順のケース
 * O(n): データが昇順のケース
 * ある程度整列されたデータに対しては高速に動作する特徴をもつ
 */
void trace(vector<int> a) {
  for (int i = 0; i < a.size(); ++i) {
    if (i == a.size() - 1)
      cout << a[i] << endl;
    else
      cout << a[i] << " ";
  }
}

void insertionSort(vector<int> a) {
  for (int i = 1; i < a.size(); ++i) {
    int v = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > v) {
      a[j + 1] = a[j];
      --j;
    }
    a[j + 1] = v;
    trace(a);
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto& ai : a) cin >> ai;
  insertionSort(a);
  return 0;
}