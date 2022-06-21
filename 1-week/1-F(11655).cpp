// https://www.acmicpc.net/problem/11655

#include <bits/stdc++.h>
using namespace std;
string s;

int main() {
	getline(cin, s);
	
	for(int i = 0; i < s.size(); i++) {
		if(s[i] >= 65 && s[i] < 97) {
			if(s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}	else if(s[i] >= 97 && s[i] <= 122) {
			if(s[i] + 13 > 122) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}
		cout << s[i];
	}
	return 0;
}



/* 내가 쓴 코드 
string lower = "abcdefghijklmnopqrstuvwxyzabcdefghijklm";
string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM";
string input, answer = "";


int main() {
	
	getline(cin, input);
	
	for(char c : input) {
		if(c -'a' >= 0 && c - 'a' <= 25) answer += (lower[c - 'a' + 13]);
		else if(c - 'A' >= 0 && c - 'A' <= 25) answer += (upper[c - 'A' + 13]);
		else answer += c;
	}
	
	cout << answer << "\n";
	
	return 0;
}
*/