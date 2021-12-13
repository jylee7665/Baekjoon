#include <bits/stdc++.h>
using namespace std;


//3986
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int ans = 0;
	while (n--) {
		string s;
		cin >> s;

		stack<char> st;
		for (int i = 0; i < s.length(); i++) {
			if (st.empty()) {
				st.push(s[i]);
			}
			else {
				if (st.top() == s[i]) {
					st.pop();
				}
				else {
					st.push(s[i]);
				}
			}
		}

		if (st.empty()) ans++;
	}
	cout << ans;
}
