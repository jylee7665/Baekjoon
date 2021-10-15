#include <iostream>

using namespace std;

int factorial(int n) {
	if (n <= 1) return 1;
	else return n * factorial(n - 1);

}
// 10872번
int main() {
	int N;
	cin >> N;
	int num = factorial(N);
	cout << num;
	return 0;
}
