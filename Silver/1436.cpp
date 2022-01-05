#include <bits/stdc++.h>
using namespace std;


//1436
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, tmp;
	cin >> n;

	int ans = 0, cnt = 0;
	while (cnt !=n) {
		ans++;
		tmp = ans;
		while (tmp != 0) {
			if (tmp % 1000 == 666) {
				cnt++;
				break;
			}
			tmp /= 10;
		}
	}
	cout << ans;
}
