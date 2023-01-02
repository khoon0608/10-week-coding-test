// https://www.acmicpc.net/problem/9935
// 알고리즘: 스택

#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

string str, bomb, ret;
stack<char> stk;

int main() {

  cin >> str >> bomb;

  /*
  for (char c: str) {
    ret += c;
    if (ret.size() >= bomb.size() &&
        ret.substr(ret.size() - bomb.size(), bomb.size()) == bomb) {
      ret.erase(ret.end() - bomb.size(), ret.end());
    }
  }

if(ret.size()) cout << ret << "\n";
  else cout << "FRULA\n";
  */

  /*
  for (char c : str) {
    stk.push(c);
    if (stk.size() >= bomb.size() && c == bomb[bomb.size() - 1]) {
      string ss = "";
      for (char cc: bomb) {
        ss += stk.top();
        stk.pop();
      }
      reverse(ss.begin(), ss.end());
      if (ss != bomb) {
        for (char cc : ss)
          stk.push(cc);
      }
    }
  }

  if (stk.size()) {
    while (stk.size()) {
      ret += stk.top();
      stk.pop();
    }
    reverse(ret.begin(), ret.end());
    cout << ret << "\n";
  } else {
    cout << "FRULA\n";
  }
*/
  return 0;
}