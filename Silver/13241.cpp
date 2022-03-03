#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
	return a % b == 0 ? b : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long a, b;
	cin >> a >> b;

	cout << lcm(a, b);
}
