// https://www.acmicpc.net/problem/14469
// 알고리즘: 그리디, 라인스위핑

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n, sp, ep, ret;

int main() {
  cin >> n;
  vector<pair<int, int>> v(n);

  for(int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < n; i++) {
    
  }

  cout << ret << "\n";

  return 0;
}