#include <bits/stdc++.h>
using namespace std;


//1874
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,x;
	cin >> n;

	stack<int> st;
	vector<char> ans;

	int cnt = 1;
	while (n--) {
		cin >> x;

		while (cnt <= x) {
			st.push(cnt);
			cnt++;
			ans.push_back('+');
		}

		if (st.top() == x) {
			st.pop();
			ans.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	for (auto c : ans) cout << c << "\n";
}
