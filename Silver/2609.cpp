#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int gcd(int a, int b) {
	return a % b == 0 ? b : gcd(b, a % b);
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}
//2609
int main(void) {
	int a, b;
	cin >> a >> b;

	cout << gcd(a, b) << '\n' << lcm(a, b);
}
