#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int s[2][7]; //성별,학년
//13300
int main(void) {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		s[a][b]++;
	}

	int cnt = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j < 7; j++) {
			cnt += s[i][j] / k;

			if (s[i][j] % k) cnt++;
		}
	}
	cout << cnt;
}
