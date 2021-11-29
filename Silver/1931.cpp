#include <bits/stdc++.h>
#include <iostream>
using namespace std;

pair<int, int> s[100005];
//11047
int main(void) {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> s[i].second >> s[i].first;
	sort(s, s + n);

	int ans = 0,t=0;
	for (int i = 0; i < n; i++) {
		if (t > s[i].second) continue;
		ans++;
		t = s[i].first;
	}
	cout << ans;
}
