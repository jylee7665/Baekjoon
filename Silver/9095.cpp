#include <bits/stdc++.h>
using namespace std;


//9095
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	int n;
	while (t--) {
		cin >> n;

		int dp[11] = { 0, };
		dp[1] = 1; dp[2] = 2; dp[3] = 4;

		for (int i = 4; i <= n; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}

		cout << dp[n] << "\n";
	}

}
