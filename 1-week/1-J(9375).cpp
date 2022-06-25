// https://www.acmicpc.net/problem/9375

#include <bits/stdc++.h>
using namespace std;

int t, n;
string name, kind;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> t;
	while(t--) {
		map<string, int> dress;
		cin >> n;
		
		for(int i = 0; i < n; i++) {
			cin >> name >> kind;
			dress[kind]++;
		}
		long long ret = 1;
		for(auto c : dress) {
			ret *= ((long long) c.second + 1);
		}
		ret--;
		// // 종류마다 (속한 옷의 수 + 1) 을 모두 곱한 값 - 1 
		cout << ret << "\n";
	}
	
	return 0;
}