#include <bits/stdc++.h>
using namespace std;

//10816
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	sort(a.begin(), a.end());

	int m,idx;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> idx;
		auto l = lower_bound(a.begin(), a.end(), idx);
		auto u = upper_bound(a.begin(), a.end(), idx);

		cout << u - l << " ";
	}

}
