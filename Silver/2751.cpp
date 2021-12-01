#include <bits/stdc++.h>
using namespace std;

//2751
int main(void) {
	int n;
	cin >> n;
	vector<int> v;
	while (n--) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for (auto i : v) cout << i << "\n";
}
