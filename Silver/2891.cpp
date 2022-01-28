#include <bits/stdc++.h>
using namespace std;

int arr[12];
//2891
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++) arr[i] = 0;
	while (a--) {
		int x;
		cin >> x;
		arr[x]--;
	}

	while (b--) {
		int x;
		cin >> x;
		arr[x]++;
	}

	for (int i = 1; i <= n; i++) {
		if (arr[i] ==- 1) {
			if (arr[i - 1] == 1) {
				arr[i] = arr[i - 1] = 0;
			}
			else if (arr[i + 1] == 1) {
				arr[i] = arr[i + 1] = 0;
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) if (arr[i] == -1) ans++;
	cout << ans;
}
