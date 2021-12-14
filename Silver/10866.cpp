#include <bits/stdc++.h>
using namespace std;


//10866
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	deque<int> dq;
	string st;
	while (n--) {
		cin >> st;

		int num;
		if (st == "push_front") {
			cin >> num;
			dq.push_front(num);
		}
		else if (st == "push_back") {
			cin >> num;
			dq.push_back(num);
		}
		else if (st == "pop_front") {
			if (dq.empty()) cout << "-1\n";
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (st == "pop_back") {
			if (dq.empty()) cout << "-1\n";
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (st == "size") {
			cout << dq.size() << "\n";
		}
		else if (st == "empty") {
			if (dq.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else if (st == "front") {
			if (dq.empty()) cout << "-1\n";
			else {
				cout << dq.front() << "\n";
			}
		}
		else {
			if (dq.empty()) cout << "-1\n";
			else {
				cout << dq.back() << "\n";
			}
		}
	}
}
