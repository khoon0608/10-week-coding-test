// https://www.acmicpc.net/problem/1202
// 알고리즘: 그리디, 우선순위 큐, 정렬

#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, k;
long long ret;

int main() {
  cin >> n >> k;
  pair<int, int> p[n + 4];
  int b[k + 4];

  for (int i = 0; i < n; i++) {
    cin >> p[i].first >> p[i].second;
  }
  for (int i = 0; i < k; i++) {
    cin >> b[i];
  }

  sort(p, p + n);
  sort(b, b + k);

  priority_queue<int> pq;
  int j = 0;

  for (int i = 0; i < k; i++) {
    while (j < n && p[j].first <= b[i]) {
      pq.push(p[j].second);
      j++;
    }
    if (pq.size()) {
      ret += pq.top();
      pq.pop();
    }
  }

  cout << ret << "\n";
  return 0;
}