// https://www.acmicpc.net/problem/2559

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n, k, temp, psum[100001], ret = -10000004;

int main() {
	
	cin >> n >> k;
	
	for(int i = 1; i <= n; i++) {
		cin >> temp;
		psum[i] = psum[i - 1] + temp;
		cout << psum[i] << "\n";
	}
	
	
	for(int i = k; i <= n; i++) {
		cout << psum[i] << " " << psum[i - k] << " " << psum[i] - psum[i - k] << "\n";
		ret = max(ret, psum[i] - psum[i - k]);
	}
	
	cout << ret << "\n";
	
	return 0;
}