#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//10828
int main(void) {
	int n;
	cin >> n;
	stack<int> st;
	while (n--) {
		string s;
		cin >> s;
		if (s == "push") {
			int n;
			cin >> n;
			st.push(n);
		}
		else if (s == "pop") {
			if (st.empty()) cout << -1 << "\n";
			else {
				cout << st.top() << "\n";
				st.pop();
			}
		}
		else if (s == "size") cout << st.size() << "\n";
		else if (s == "empty") {
			if (st.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else {
			if (st.empty()) cout << "-1\n";
			else cout << st.top() << "\n";
		}
	}
}
