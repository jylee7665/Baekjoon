#include <bits/stdc++.h>
using namespace std;

int arr[21];
//11723
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	while (n--) {
		int a;
		string cmd;
		cin >> cmd;

		if (cmd == "add") {
			cin >> a;
			if (arr[a] == 0) {
				arr[a] = 1;
			}
		}
		else if (cmd == "remove") {
			cin >> a;
			if (arr[a] == 1) {
				arr[a] = 0;
			}
		}
		else if (cmd == "check") {
			cin >> a;
			if (arr[a])
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (cmd == "toggle") {
			cin >> a;
			if (arr[a])
				arr[a] = 0;
			else
				arr[a] = 1;
		}
		else if (cmd == "all") {
			for (int i = 1; i <= 20; i++) arr[i] = 1;
		}
		else if (cmd == "empty") {
			memset(arr, 0, sizeof(arr));
		}
	}

}
