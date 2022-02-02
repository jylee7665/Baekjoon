#include <bits/stdc++.h>
using namespace std;

//11279
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n; cin >> n;

	priority_queue<int, vector<int>, less<int>> pq;
	int a;
	while (n--) {
		cin >> a;
		pq.push(a);

		if (a == 0) {
			if (pq.empty()) cout << 0 << "\n";
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}

	}
}
