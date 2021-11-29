#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//10845
int main(void) {
	int n;
	cin >> n;
	queue<int> q;
	while (n--) {
		string st;
		cin >> st;
		if (st == "push") {
			int c;
			cin >> c;
			q.push(c);

		}
		else if (st == "pop") {
			if (q.size() > 0) {
				cout << q.front() << "\n";
				q.pop();
			}
			else cout << -1 <<"\n";
		}
		else if (st == "size") cout << q.size() << "\n";
		else if (st == "empty") {
			if (q.size() == 0) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (st == "front") {
			if (!q.empty())cout << q.front() << "\n";
			else cout << -1 << "\n";
		}
		else {
			if (!q.empty()) cout << q.back() << "\n";
			else cout << -1 << "\n";
		}
	}
}
