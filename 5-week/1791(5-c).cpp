// https://www.acmicpc.net/problem/1781
// 알고리즘: 그리디, 우선순위 큐

#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, ret;

int main() {

  cin >> n;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }

  sort(v.begin(), v.end());
  // 데드라인을 기준으로 오름차순 정렬

  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i < n; i++) {
    pq.push(v[i].second);
    if (pq.size() > v[i].first)
      pq.pop();
  }
  // pq안에 컵라면 수를 넣고 pq의 크기가 데드라인보다 크다면 최소값을 뺌

  while (pq.size()) {
    ret += pq.top();
    pq.pop();
  }
  cout << ret << "\n";

  return 0;
}
