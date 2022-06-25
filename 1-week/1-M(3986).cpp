// https://www.acmicpc.net/problem/3986

#include <bits/stdc++.h>
using namespace std;

string s;
int n, answer = 0;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> s;
		stack<char> stk;
		for(char c : s) {
			if(stk.size() && stk.top() == c) {
				stk.pop();
			} else {
				stk.push(c);
			}
		}
		if(stk.size() == 0) answer++; 
	}
	
	cout << answer << "\n";
	
	return 0;
}