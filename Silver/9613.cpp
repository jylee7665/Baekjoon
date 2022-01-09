#include <bits/stdc++.h>
#include <unordered_map>;
using namespace std;

int arr[102];
int gcd(int a, int b) {
	return a % b == 0 ? b : gcd(b, a % b);
}
//9613
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		for (int i = 0; i < a; i++)
			cin >> arr[i];

		long long sum = 0;
		for (int i = 0; i < a; i++) {
			for (int j = i + 1; j < a; j++) {
				sum += gcd(arr[i], arr[j]);
			}
		}

		cout << sum << "\n";
	}
	return 0;
}
