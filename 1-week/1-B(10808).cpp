// https://www.acmicpc.net/problem/10808

#include <bits/stdc++.h>
using namespace std;

string str;
int alphabet[26];

int main() {

	cin >> str;
	for(char c : str) alphabet[c - 'a'] += 1;
	// 입력받은 문자열을 문자마다 소문자 a의 아스키 코드로 뺀 값을 인덱스로 가지는 곳에 + 1함
	for(int i : alphabet) cout << i << " ";


	return 0;
}

