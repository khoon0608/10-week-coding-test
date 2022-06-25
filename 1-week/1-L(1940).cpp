// https://www.acmicpc.net/problem/1940

#include <bits/stdc++.h>
using namespace std;

int n, m, arr[15004], answer = 0;

int main() {
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	
	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(arr[i] + arr[j] == m) answer++;			
		}
	}
	
	cout << answer << "\n";
	
	return 0;
}