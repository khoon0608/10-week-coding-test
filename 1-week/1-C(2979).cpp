// https://www.acmicpc.net/problem/2979 

#include <bits/stdc++.h>
using namespace std;

int one, two, three, timeIn, timeOut, cnt[104], totalCharge;

int main() {

	cin >> one >> two >> three;

	for(int i = 0; i < 3; i++) {
		cin >> timeIn >> timeOut;

		for(int j = timeIn; j < timeOut; j++) cnt[j]++;
	}
	// (timeIn, timeOut]

	for(int i = 1; i < 100; i++) {
		if(cnt[i]) {
			if(cnt[i] == 1) {
				totalCharge += one;
				cout << one << "\n";
			}
			else if(cnt[i] == 2) {
				totalCharge += two * 2;
				cout << two * 2 << "\n";
			}
			else if(cnt[i] == 3) {
				totalCharge += three * 3;
				cout << three * 3 << "\n";
			}
		}

	}

	cout << totalCharge << "\n";

	return 0;
}