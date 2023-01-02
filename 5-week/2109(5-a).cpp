// https://www.acmicpc.net/problem/2109
// 알고리즘: 그리디, 우선순위 큐

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;
int n, d, p, ret;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> p >> d;
    v.push_back({d, p});
  }

  sort(v.begin(), v.end());
  // 기간을 기준으로 오름차순 정렬

  priority_queue<int, vector<int>, greater<int>> pq;
  // 오름차순 우선순위 큐
  
  for(int i = 0; i < n; i++) {
    pq.push(v[i].second);
    if(pq.size() > v[i].first) pq.pop();
  }
  // 일단 pq에 강연료를 넣고 pq의 크기가 기간보다 크다면 제일 위에 있는걸 뺀다

  while(pq.size()) {
    ret += pq.top();
    pq.pop();
  }

  cout << ret << "\n";

  return 0;
  
}