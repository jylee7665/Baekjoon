#include <bits/stdc++.h>
using namespace std;


bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}
//11651
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<pair<int, int>> p(n);
	for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
	sort(p.begin(), p.end(),cmp);
	for (auto x : p) cout << x.first << " " << x.second << "\n";
}
