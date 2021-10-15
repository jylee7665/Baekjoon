#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
// 1929
// 에라토스테네스의 체
int main() {
	int m, n;
	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		if (isPrime(i))
			cout << i << '\n';
	}
	return 0;
}
