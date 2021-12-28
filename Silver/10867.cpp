#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, num;
	cin >> n;
	vector<int> v;

	while (n--) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (auto n : v) cout << n << " ";
}
