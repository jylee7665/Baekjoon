#include <bits/stdc++.h>
using namespace std;


//15688
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v;
	int n,num;
	cin >> n;
	while (n--) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());
	for (auto n : v) cout << n << "\n";

}
