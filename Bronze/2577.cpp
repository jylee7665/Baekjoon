#include <bits/stdc++.h>
using namespace std;

//2577
int num[10];
int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a * b * c;

	while (sum > 0) {
		num[sum % 10]++;
		sum /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << num[i] << '\n';
}
