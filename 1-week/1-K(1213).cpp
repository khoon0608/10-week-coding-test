// https://www.acmicpc.net/problem/1213

#include <bits/stdc++.h>
using namespace std;

string s, ret;
int cnt[200], flag;
char mid;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> s;
	for(char a: s) cnt[a]++;
	for(int i = 'Z'; i >= 'A'; i--) {
		// 사전순서상 뒤에 있는 문자부터 배치
		if(cnt[i]) {
			if(cnt[i] & 1) {
				mid = char(i);
				flag++;
				cnt[i]--;
			}
			// 문자가 홀수이면 하나를 mid에넣고 갯수 하나 빼기
			if(flag == 2) break;
			// 홀수인 수가 2개 이상이 되면 팰린드롬 불가
			for(int j = 0; j < cnt[i]; j+= 2) {
				ret = char(i) + ret;
				ret += char(i);
			}
			// 문자를 앞뒤로 각각 1개씩 붙힘
		}
	}
	
	if(mid) ret.insert(ret.begin() + ret.size() / 2, mid);
	// 하나뿐인 문자를 중간에 삽입 
	if(flag == 2) cout << "I'm Sorry Hansoo\n";
	else cout<< ret << "\n";
	
	return 0;
}