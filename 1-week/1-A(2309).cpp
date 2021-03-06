// https://www.acmicpc.net/problem/2309

#include <bits/stdc++.h>
using namespace std;

int a[9];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for(int i = 0; i < 9; i++) {
		cin >> a[i];
	}

	sort(a, a + 9);

	do{
		int sum = 0;
		for(int i = 0; i < 7; i++) sum += a[i];
		if(sum == 100) break;
	} while(next_permutation(a, a + 9));
	// 배열에서 7개를 선택해서 다 더한 후 100이면 출력 후 반복문 정지 아니면 next_permutation을 사용해서 배열의 순서를 변경 후 반복

	for(int i = 0; i < 7; i++) cout << a[i] << "\n";

	return 0;
}

