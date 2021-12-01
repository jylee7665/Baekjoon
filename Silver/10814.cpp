#include <bits/stdc++.h>
using namespace std;

pair<int, string> p[100005];

bool cmp(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}
//10814
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
	stable_sort(p, p + n,cmp);
	for (int i = 0; i < n; i++) cout << p[i].first << " " << p[i].second << "\n";
}
