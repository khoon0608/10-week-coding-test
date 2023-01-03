// https://www.acmicpc.net/problem/1644
// 알고리즘: 투 포인터, 소수 판정, 에라토스테네스의 체

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, ret, sum;
bool check[4000004];

int main() {
  cin >> n;
  vector<int> v;

  for (int i = 2; i <= n; i++) {
    if (!check[i]) {
      v.push_back(i);
      for (int j = i * 2; j <= n; j += i) {
        check[j] = true;
      }
    }
  }

  queue<int> que;

  for (int i = 0; i < v.size(); i++) {
    sum += v[i];
    que.push(v[i]);

    while (sum > n) {
      sum -= que.front();
      que.pop();
    }
    
    if (sum == n)  ret++;
  }

  cout << ret << "\n";
  return 0;
}

