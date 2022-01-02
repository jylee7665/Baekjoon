#include <bits/stdc++.h>
using namespace std;

//1822
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b,num;
	cin >> a >> b;
	vector<int> n(a), m(b);
	while (a--) {
		cin >> num;
		n.push_back(num);
	}
	while (b--) {
		cin >> num;
		m.push_back(num);
	}

	sort(n.begin(), n.end());
	sort(m.begin(), m.end());
	
	vector<int> ans;
	for (int i = 0; i < n.size(); i++) {
		if (!binary_search(m.begin(), m.end(), n[i]))
			ans.push_back(n[i]);
	}

	cout << ans.size() << '\n';
	for (auto n : ans) cout << n << " ";
}
