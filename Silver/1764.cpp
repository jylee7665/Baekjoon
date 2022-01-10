#include <bits/stdc++.h>
using namespace std;

//1764
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<string> v1, v2;
	
	while (n--) {
		string st;
		cin >> st;
		v1.push_back(st);
	}
	sort(v1.begin(), v1.end());

	string st;
	for (int i = 0; i < m; i++) {
		cin >> st;
		if (binary_search(v1.begin(), v1.end(), st)) {
			v2.push_back(st);
		}
	}
	sort(v2.begin(), v2.end());
	
	cout << v2.size() << "\n";
	for (auto c : v2) cout << c << "\n";
}
