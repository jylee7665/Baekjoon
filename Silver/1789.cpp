#include <iostream>
#include <cmath>
using namespace std;

//1789
int main(void) {
	long S;
	cin >> S;

	long start = 1, end = S;
	long ans = 0;
	while (start <= end) {
		long mid = (start + end) / 2;

		if (mid * (mid + 1) / 2 <= S) {
			ans = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	cout << ans;
}
