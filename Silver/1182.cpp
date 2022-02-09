#include <bits/stdc++.h>
using namespace std;

int n, s;
int ans = 0;

int arr[25];
void func(int cnt, int tot) {
	if (cnt == n) {
		if (tot == s) ans++;
		return;
	}
	func(cnt+1, tot);
	func(cnt + 1, tot + arr[cnt]);
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> s;
	for (int i = 0; i < n; i++) cin >> arr[i];
	func(0,0);
	if (s == 0) ans--;
	cout << ans;
}
