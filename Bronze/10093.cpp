#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//10093
int main(void){
	long long a, b;
	cin >> a >> b;

	if (a > b)
		swap(a, b);
	else if (a == b) {
		cout << 0;
		return 0;
	}
	cout << b - a - 1 << '\n';
	for (long long i = a+1; i < b; i++) {
		cout << i << ' ';
	}
}
