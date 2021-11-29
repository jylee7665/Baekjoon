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
	v.erase(unique(v.begin(), v.end()), v.end());
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";
}
