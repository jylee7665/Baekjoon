#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//2587
int main(void) {
	int sum = 0;
	int n;
	vector<int> num;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		sum += n;
		num.push_back(n);
	}

	sort(num.begin(), num.end());

	cout << (double)sum / 5 << '\n' << num[2];
}
