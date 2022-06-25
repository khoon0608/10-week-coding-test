// https://www.acmicpc.net/problem/1620

#include <bits/stdc++.h>
using namespace std;

int n, m;
string s;
map<string, int> pokeDexKeyName;
map<int, string> pokeDexKeyNum;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++) {
		cin >> s;
		pokeDexKeyName[s] = i;
		pokeDexKeyNum[i] = s;
	}
	
	for(int i = 0; i < m; i++) {
		cin >> s;
		if(atoi(s.c_str()) == 0) cout << pokeDexKeyName[s] << "\n";
		else cout << pokeDexKeyNum[atoi(s.c_str())] << "\n";
	}
	
	return 0;
}