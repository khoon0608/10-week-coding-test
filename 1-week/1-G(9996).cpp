// https://www.acmicpc.net/problem/9996

#include <bits/stdc++.h>
using namespace std;
int n;
string str, pattern, pre, suf;

int main() {
	
	cin >> n >> pattern;
	
	int pos = pattern.find('*');
	pre = pattern.substr(0, pos);
	// (0, pos]
	suf = pattern.substr(pos + 1);
	// (pos + 1, string::npos]
	
	for(int i = 0; i < n; i++) {
		cin >> str;
		
		if(pre.size() + suf.size() > str.size()) {
			cout << "NE\n";
			// 패턴의 앞과 뒤보다 문자 수가 적다면 패턴과 다름 
		}	else {
			if(pre == str.substr(0, pre.size()) && (suf == str.substr(str.size() - suf.size()))) cout << "DA\n";
			// 주어진 문자열의 패턴의 앞과 뒤의 문자 수만큼 문자열을 뽑아내 비교
			else cout << "NE\n";
		}
	}
	
	return 0;
}