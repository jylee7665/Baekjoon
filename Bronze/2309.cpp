#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//2309
int main(void) {
	int n[9], sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> n[i];
		sum += n[i];
	}
	sort(n, n + 9);
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - n[i] - n[j] == 100) {
				for (int k = 0; k < 9; k++) {
					if (i == k || j == k)continue;
					cout << n[k] << '\n';
				}
				return 0;
			}
		}
	}
}
