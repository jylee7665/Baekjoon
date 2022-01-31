#include <bits/stdc++.h>
using namespace std;

//18870
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> num;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		num.push_back(a);
	}

	vector<int> copy(num);
	sort(copy.begin(), copy.end());
	copy.erase(unique(copy.begin(), copy.end()), copy.end());

	for (int i = 0; i < n; i++) {
		auto idx = lower_bound(copy.begin(), copy.end(), num[i]);
		cout << idx - copy.begin() << " ";
	}
}
