#include <bits/stdc++.h>
using namespace std;


//11656
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string st;
	cin >> st;

	vector<string> v;

	for (int i = 0; i < st.size(); i++) {
		v.push_back(st.substr(i, st.size() - i));
	}

	sort(v.begin(), v.end());
	for (auto c : v) cout << c << "\n";

	return 0;
}
