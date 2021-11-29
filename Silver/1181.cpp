#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
	if (a.size() == b.size()) return a < b;
	return a.size() < b.size();
}
//1181
int main(void) {
	int n;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++) {
		string st;
		cin >> st;
		v.push_back(st);
	}

	sort(v.begin(), v.end(), cmp);
	string tmp;
	for (int i = 0; i < n; i++) {
		if (tmp == v[i]) continue;
		cout << v[i] << "\n";
		tmp = v[i];
	}
}
