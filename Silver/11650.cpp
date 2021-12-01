#include <bits/stdc++.h>
using namespace std;


//11650
int main(void) {
	int n;
	cin >> n;
	vector<pair<int, int>> p(n);
	for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
	sort(p.begin(),p.end());
	for (int i = 0; i < n; i++) cout << p[i].first << " " << p[i].second << "\n";
}
