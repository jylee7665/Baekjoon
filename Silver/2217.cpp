#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int rope[100005];
//2217
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> rope[i];
	sort(rope, rope + n);
	int ans = 0;
	for (int i = 1; i <= n; i++)
		ans = max(ans, rope[n - i] * i);
	cout << ans;
}
	
