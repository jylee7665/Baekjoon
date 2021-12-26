#include <bits/stdc++.h>
using namespace std;


int cmp(string a, string b) {
	// 1.길이가 짧은 것 부터
	if (a.size() != b.size()) {
		return a.size() < b.size();
	}

	// 2. 자리수 합 비교하여 작은 합 부터
	int a_sum = 0, b_sum = 0;
	for (int i = 0; i < a.size(); i++) {
		if ('0' <= a[i] && a[i] <= '9') a_sum += a[i]-'0';
		if ('0' <= b[i] && b[i] <= '9') b_sum += b[i] - '0';
	}

	if (a_sum != b_sum) return a_sum < b_sum;

	return a < b;
}
//1431
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	
	vector<string> v;
	string st;
	while (n--) {
		cin >> st;
		v.push_back(st);
	}

	sort(v.begin(), v.end(),cmp);

	for (auto c : v) cout << c << "\n";

}
