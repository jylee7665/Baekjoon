#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string n;

	while (1) {
		cin >> n;
		if (n == "0") break;
		bool flag = true;
		for (int i = 0; i < n.length() / 2; i++) {
			if (n[i] != n[n.length() - 1 - i]) {
				cout << "no\n";
				flag = false;
				break;
			}
		}

		if (flag) cout << "yes\n";
	}

}
