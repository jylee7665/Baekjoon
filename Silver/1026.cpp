#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int a[55];
int b[55];
//1026
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	sort(a, a + n);
	sort(b, b + n, greater<int>());

	int ans = 0;
	for (int i = 0; i < n; i++)
		ans += a[i] * b[i];
	cout << ans;
}
