#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int num[10];
//1475
int main(void) {
	int n;
	cin >> n;


	while (n > 0) {
		num[n % 10]++;
		n /= 10;
	}

	int cnt = 1;
	for (int i = 0; i < 10; i++) {
		if (i==6 || i==9) continue;
		cnt = max(num[i], cnt);
	}

	cnt = max(cnt, (num[6] + num[9]+1) / 2);
	cout << cnt;
}
