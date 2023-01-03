// https://www.acmicpc.net/submit/1931/53419150
// 알고리즘: 그리디

#include <iostream>
#include <algorithm>

using namespace std;

int n, r, l, ret;

int main() {
  cin >> n;
  pair<int, int> p[n + 4];

  for(int i = 0; i < n; i++) {
    cin >> p[i].second >> p[i].first;
  }
  sort(p, p + n);
  r = p[0].first;
  l = p[0].second;
  ret = 1;
  
  for(int i = 1; i < n; i++) {
    if(p[i].second >= r) {
      r = p[i].first;
      ret++;
    }
  }

  cout << ret << "\n";
  return 0;
}