#include <bits/stdc++.h>
using namespace std;


//2493
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,num;
	cin >> n;
	stack<pair<int, int>> st; //idx,height 순

	for (int i = 1; i <= n; i++) {
		cin >> num;
		while (!st.empty()) {
			if (st.top().second > num) {
				cout << st.top().first << " ";
				break;
			}
			st.pop();
		}

		if (st.empty()) cout << "0 ";

		st.push({ i,num });
	}
}
