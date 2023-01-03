// https://www.acmicpc.net/problem/13144
// 알고리즘: 투 포인터

#include <iostream>
using namespace std;

long long n, arr[100004], check[100004], e, s, ret;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  while (e < n) {
    if (!check[arr[e]]) {
      check[arr[e]]++;
      e++;
    } else {
      check[arr[s]]--;
      ret += e - s;
      s++;
    }
  }

  ret += (e - s) * (e - s + 1) / 2;

  cout << ret << "\n";
  return 0;
}